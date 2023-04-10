/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 01:33:51 by sungmpar          #+#    #+#             */
/*   Updated: 2021/07/30 23:08:17 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rra(t_stack *head)
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
	write(1, "rra\n", 4);
	return (0);
}
