/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 02:47:42 by sungmpar          #+#    #+#             */
/*   Updated: 2021/07/30 23:12:48 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	five_sort(t_stack *head, t_stack *b_head, t_info *info)
{
	int	mid;

	mid = info->mid;
	while (head->n > 3)
	{
		if (head->next->n < mid)
			pb(head, b_head);
		else if (head->next->n >= mid)
			ra(head);
	}
	if (b_head->next->n < b_head->next->next->n)
		sb(b_head);
	find_min(head, info);
	find_max(head, info);
	three_sort(head, info);
	pa(head, b_head);
	pa(head, b_head);
	return (0);
}
