/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_max_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 02:10:10 by sungmpar          #+#    #+#             */
/*   Updated: 2021/09/27 00:22:20 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	find_m_mid(t_stack *head, t_info *info)
{
	int		num;
	int		count;
	int		tmp_m_mid;
	t_stack	*ptr;

	info->m_mid = info->max;
	num = 0;
	tmp_m_mid = head->n - (info->divide / 2);
	while (num++ < tmp_m_mid)
	{
		count = 0;
		info->vs = info->m_mid;
		info->m_mid = info->min;
		ptr = head;
		while (count++ < head->n)
		{
			ptr = ptr->next;
			if (info->m_mid < ptr->n && ptr->n < info->vs)
			{	
				info->m_mid = ptr->n;
			}	
		}
	}
}

void	find_five(t_stack *head, t_info *info)
{
	int		num;
	int		count;
	int		tmp_five;
	t_stack	*ptr;

	info->five = info->max;
	num = 0;
	tmp_five = head->n - info->divide;
	while (num++ < tmp_five)
	{
		count = 0;
		info->vs = info->five;
		info->five = info->min;
		ptr = head;
		while (count++ < head->n)
		{
			ptr = ptr->next;
			if (info->five < ptr->n && ptr->n < info->vs)
			{	
				info->five = ptr->n;
				info->five_target = count;
			}	
		}
	}
	find_m_mid(head, info);
}

void	find_mid(t_stack *head, t_info *info)
{
	int		num;
	int		count;
	int		divide;
	t_stack	*ptr;

	info->mid = info->max;
	num = 1;
	divide = 1;
	if (head->n % 2 == 0)
		divide = 0;
	while (num++ < (head->n + divide) / 2)
	{
		count = 0;
		info->vs = info->mid;
		info->mid = info->min;
		ptr = head;
		while (count++ < head->n)
		{
			ptr = ptr->next;
			if (info->mid < ptr->n && ptr->n < info->vs)
				info->mid = ptr->n;
		}
	}
	find_five(head, info);
}

void	find_max(t_stack *head, t_info *info)
{
	int		count;
	t_stack	*ptr;

	ptr = head->next;
	count = 1;
	info->max = ptr->n;
	while (count++ < head->n)
	{
		ptr = ptr->next;
		if (info->max < ptr->n)
		{
			info->max = ptr->n;
			info->max_target = count;
		}
	}
	ptr = head;
	count = 1;
	info->snd_max = info->min;
	while (count++ < head->n)
	{
		ptr = ptr->next;
		if (info->snd_max < ptr->n && ptr->n < info->max)
			info->snd_max = ptr->n;
	}
	find_mid(head, info);
}
