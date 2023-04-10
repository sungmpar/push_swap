/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 04:47:03 by sungmpar          #+#    #+#             */
/*   Updated: 2021/07/30 23:11:51 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	three_sort(t_stack *head, t_info *info)
{
	if (head->next->n == info->max && head->next->next->next->n == info->min)
	{
		sa(head);
		rra(head);
	}
	else if (head->next->n == info->max && head->next->next->n == info->min)
		ra(head);
	else if (head->next->next->n == info->min && \
	head->next->next->next->n == info->max)
		sa(head);
	else if (head->next->next->n == info->max && \
	head->next->next->next->n == info->min)
		rra(head);
	else if (head->next->n == info->min && head->next->next->n == info->max)
	{
		sa(head);
		ra(head);
	}
	return (0);
}
