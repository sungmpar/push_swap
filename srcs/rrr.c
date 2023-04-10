/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 01:36:32 by sungmpar          #+#    #+#             */
/*   Updated: 2021/07/30 23:08:57 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rrr_rrb(t_stack *b_head)
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
	return (0);
}

int	rrr_rra(t_stack *head)
{
	t_stack	*first;
	t_stack	*last;

	if (head->n < 2)
		return (0);
	first = head->next;
	last = head->prev;
	head->next = last;
	head->prev = last->prev;
	last->prev->next = head;
	first->prev = last;
	last->next = first;
	last->prev = head;
	return (0);
}

int	rrr(t_stack *a_head, t_stack *b_head)
{
	rrr_rra(a_head);
	rrr_rrb(b_head);
	write(1, "rrr\n", 4);
	return (0);
}
