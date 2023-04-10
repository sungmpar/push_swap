/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hundred_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 03:43:17 by sungmpar          #+#    #+#             */
/*   Updated: 2021/07/30 23:10:42 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	h_s_third(t_stack *head, t_stack *b_head, t_info *info)
{
	if (info->ptr->n > info->five)
	{
		if (info->rr_count == 1)
		{
			rr(head, b_head);
			info->rr_count = 0;
		}
		else
			ra(head);
	}
	if (info->rr_count == 1)
	{
		rb(b_head);
		info->rr_count = 0;
	}
}

void	h_s_snd(t_stack *head, t_stack *b_head, t_info *info, int count)
{
	while (head->n > count)
	{
		info->ptr = head->next;
		if (info->ptr->n <= info->five)
		{
			if (info->ptr->n <= info->m_mid)
			{
				pb(head, b_head);
				info->rr_count = 1;
			}
			else
				pb(head, b_head);
		}
		info->ptr = head->next;
		h_s_third(head, b_head, info);
	}
}

void	h_s_first(t_stack *head, t_info *info, int n_one)
{
	info->divide = n_one;
	find_min(head, info);
	find_max(head, info);
}

void	h_s_pass(t_stack *head, t_stack *b_head, t_info *info)
{
	int	div;
	int	act;

	while (b_head->n > 1)
	{
		div = 1;
		act = 0;
		find_max(b_head, info);
		if (b_head->next->n == info->max)
		{
			pa(head, b_head);
			act = 1;
		}
		find_max(b_head, info);
		if (act == 0)
		{
			if (b_head->n % 2 == 0)
				div = 0;
			if ((b_head->n + div) / 2 < info->max_target)
				rrb(b_head);
			else if ((b_head->n + div) / 2 >= info->max_target)
				rb(b_head);
		}
	}
	pa(head, b_head);
}

int	hundred_sort(t_stack *head, t_stack *b_head, t_info *info)
{
	h_s_first(head, info, 30);
	h_s_snd(head, b_head, info, 70);
	h_s_first(head, info, 30);
	h_s_snd(head, b_head, info, 40);
	h_s_first(head, info, 20);
	h_s_snd(head, b_head, info, 20);
	h_s_first(head, info, 15);
	h_s_snd(head, b_head, info, 5);
	find_min(head, info);
	find_max(head, info);
	five_sort(head, b_head, info);
	h_s_pass(head, b_head, info);
	return (0);
}
