/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 01:36:32 by sungmpar          #+#    #+#             */
/*   Updated: 2021/09/27 00:22:55 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	rr_rb(t_stack *b_head)
{
	t_stack	*first;
	t_stack	*last;

	if (b_head->n < 2)
		return (0);
	first = b_head->next;
	last = b_head->prev;
	b_head->next = first->next;
	b_head->prev = first;
	first->next->prev = b_head;
	first->prev = last;
	last->next = first;
	first->next = b_head;
	return (0);
}

int	rr_ra(t_stack *head)
{
	t_stack	*first;
	t_stack	*last;

	if (head->n < 2)
		return (0);
	first = head->next;
	last = head->prev;
	head->next = first->next;
	head->prev = first;
	first->next->prev = head;
	first->prev = last;
	last->next = first;
	first->next = head;
	return (0);
}

int	rr(t_stack *a_head, t_stack *b_head)
{
	rr_ra(a_head);
	rr_rb(b_head);
	return (0);
}
