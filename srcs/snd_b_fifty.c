/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snd_b_fifty.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 03:15:43 by sungmpar          #+#    #+#             */
/*   Updated: 2021/09/27 03:15:48 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	snd_b_fifty(t_stack *head, t_stack *b_head, t_info *info)
{
	info->divide = 235;
	find_min(b_head, info);
	find_max(b_head, info);
	info->tmp_num = info->five;
	info->divide = 220;
	find_min(b_head, info);
	find_max(b_head, info);
	info->ptr = b_head->next;
	while (b_head->n > 220)
	{
		rrb(b_head);
		info->ptr = b_head->next;
		if (info->ptr->n >= info->five)
		{
			if (info->ptr->n <= info->tmp_num)
			{
				pa(head, b_head);
				ra(head);
			}
			else
				pa(head, b_head);
		}
	}
	return (0);
}
