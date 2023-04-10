/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 01:36:32 by sungmpar          #+#    #+#             */
/*   Updated: 2021/07/30 23:04:54 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rb(t_stack *b_head)
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
	write(1, "rb\n", 3);
	return (0);
}
