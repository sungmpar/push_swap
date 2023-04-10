/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_hundred.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 03:43:17 by sungmpar          #+#    #+#             */
/*   Updated: 2021/07/30 23:15:44 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	b_h_third(t_stack *head, t_stack *b_head, t_info *info)
{
	if (info->ptr->n < info->five)
	{
		if (info->rr_count == 1)
		{
			rr(head, b_head);
			info->rr_count = 0;
		}
		else
			rb(b_head);
	}
	if (info->rr_count == 1)
	{
		ra(head);
		info->rr_count = 0;
	}
}

void	b_h_snd(t_stack *head, t_stack *b_head, t_info *info, int count)
{
	info->rr_count = 0;
	while (b_head->n > count)
	{	
		info->ptr = b_head->next;
		if (info->ptr->n >= info->five)
		{
			if (info->ptr->n <= info->tmp_num)
			{
				pa(head, b_head);
				info->rr_count = 1;
			}
			else
				pa(head, b_head);
		}
		info->ptr = b_head->next;
		b_h_third(head, b_head, info);
	}
}

void	b_h_first(t_stack *b_head, t_info *info, int n_one, int n_two)
{
	info->divide = n_one;
	find_min(b_head, info);
	find_max(b_head, info);
	info->tmp_num = info->five;
	info->divide = n_two;
	find_min(b_head, info);
	find_max(b_head, info);
}

int	b_hundred(t_stack *head, t_stack *b_head, t_info *info)
{
	b_h_first(b_head, info, 85, 70);
	b_h_snd(head, b_head, info, 70);
	b_h_first(b_head, info, 55, 40);
	b_h_snd(head, b_head, info, 40);
	b_h_first(b_head, info, 25, 10);
	b_h_snd(head, b_head, info, 10);
	return (0);
}
