/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_fifty.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 03:43:17 by sungmpar          #+#    #+#             */
/*   Updated: 2021/07/30 23:17:48 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	b_f_third(t_stack *head, t_stack *b_head, t_info *info)
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

void	b_f_snd(t_stack *head, t_stack *b_head, t_info *info, int count)
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
		b_f_third(head, b_head, info);
	}
}

void	b_f_first(t_stack *b_head, t_info *info, int n_one, int n_two)
{
	info->divide = n_one;
	find_min(b_head, info);
	find_max(b_head, info);
	info->tmp_num = info->five;
	info->divide = n_two;
	find_min(b_head, info);
	find_max(b_head, info);
}

int	b_fifty(t_stack *head, t_stack *b_head, t_info *info)
{
	b_f_first(b_head, info, 285, 270);
	b_f_snd(head, b_head, info, 270);
	return (0);
}
