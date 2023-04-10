/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 02:07:28 by sungmpar          #+#    #+#             */
/*   Updated: 2021/09/27 00:22:19 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	find_min(t_stack *head, t_info *info)
{
	int		count;
	t_stack	*ptr;

	ptr = head->next;
	count = 1;
	info->min = ptr->n;
	while (count++ < head->n)
	{
		ptr = ptr->next;
		if (info->min > ptr->n)
		{
			info->min = ptr->n;
			info->target = count;
		}
	}
}
