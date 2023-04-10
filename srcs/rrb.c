/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 01:34:49 by sungmpar          #+#    #+#             */
/*   Updated: 2021/07/30 23:08:23 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rrb(t_stack *b_head)
{
	t_stack	*first;
	t_stack	*last;

	if (b_head->n < 2)
		return (0);
	first = b_head->next;
	last = b_head->prev;
	b_head->next = last;
	b_head->prev = last->prev;
	last->prev->next = b_head;
	first->prev = last;
	last->next = first;
	last->prev = b_head;
	write(1, "rrb\n", 4);
	return (0);
}
