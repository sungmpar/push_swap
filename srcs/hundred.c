/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hundred.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 03:43:17 by sungmpar          #+#    #+#             */
/*   Updated: 2021/07/30 23:13:17 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	h_third(t_stack *head, t_stack *b_head, t_info *info)
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

void	h_snd(t_stack *head, t_stack *b_head, t_info *info, int count)
{
	info->rr_count = 0;
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
		h_third(head, b_head, info);
	}
}

void	h_first(t_stack *head, t_info *info, int n_one)
{
	info->divide = n_one;
	find_min(head, info);
	find_max(head, info);
}

int	hundred(t_stack *head, t_stack *b_head, t_info *info)
{	
	h_first(head, info, 30);
	h_snd(head, b_head, info, 70);
	h_first(head, info, 30);
	h_snd(head, b_head, info, 40);
	h_first(head, info, 20);
	h_snd(head, b_head, info, 20);
	h_first(head, info, 15);
	h_snd(head, b_head, info, 5);
	find_min(head, info);
	find_max(head, info);
	five_sort(head, b_head, info);
	return (0);
}
