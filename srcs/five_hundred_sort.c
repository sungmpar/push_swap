/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_hundred_sort.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 03:41:03 by sungmpar          #+#    #+#             */
/*   Updated: 2021/07/30 23:11:23 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	f_h_b_pass(t_stack *head, t_stack *b_head, t_info *info, int num)
{
	while (b_head->n > num)
	{
		info->div = 1;
		info->act = 0;
		find_max(b_head, info);
		if (b_head->next->n == info->max)
		{
			pa(head, b_head);
			info->act = 1;
		}
		find_max(b_head, info);
		if (info->act == 0)
		{
			if (b_head->n % 2 == 0)
				info->div = 0;
			if ((b_head->n + info->div) / 2 < info->max_target)
				rrb(b_head);
			else if ((b_head->n + info->div) / 2 >= info->max_target)
				rb(b_head);
		}
	}
}

void	f_h_a_pass(t_stack *head, t_stack *b_head, t_info *info, int num)
{
	while (head->n > num)
	{
		info->div = 1;
		info->act = 0;
		find_min(head, info);
		if (head->next->n == info->min)
		{
			pb(head, b_head);
			info->act = 1;
		}
		find_min(head, info);
		if (info->act == 0)
		{
			if (head->n % 2 == 0)
				info->div = 0;
			if ((head->n + info->div) / 2 < info->target)
				rra(head);
			else if ((head->n + info->div) / 2 >= info->target)
				ra(head);
		}
	}
}

void	f_h_s_snd(t_stack *head, t_stack *b_head, t_info *info)
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

void	f_h_s_first(t_stack *head, t_stack *b_head, t_info *info, int num)
{
	info->count -= num;
	info->divide = num;
	info->rr_count = 0;
	find_min(head, info);
	find_max(head, info);
	while (head->n > info->count)
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
		f_h_s_snd(head, b_head, info);
	}
}

int	five_hundred_sort(t_stack *head, t_stack *b_head, t_info *info)
{
	info->count = 500;
	f_h_s_first(head, b_head, info, 200);
	f_h_s_first(head, b_head, info, 100);
	f_h_s_first(head, b_head, info, 50);
	f_h_s_first(head, b_head, info, 50);
	hundred(head, b_head, info);
	f_h_b_pass(head, b_head, info, 300);
	b_fifty(head, b_head, info);
	f_h_a_pass(head, b_head, info, 200);
	f_h_b_pass(head, b_head, info, 250);
	snd_b_fifty(head, b_head, info);
	f_h_a_pass(head, b_head, info, 250);
	f_h_b_pass(head, b_head, info, 200);
	snd_b_hundred(head, b_head, info);
	f_h_a_pass(head, b_head, info, 300);
	f_h_b_pass(head, b_head, info, 100);
	b_hundred(head, b_head, info);
	f_h_a_pass(head, b_head, info, 400);
	f_h_b_pass(head, b_head, info, 1);
	pa(head, b_head);
	return (0);
}
