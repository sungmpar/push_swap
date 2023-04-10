/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 01:35:15 by sungmpar          #+#    #+#             */
/*   Updated: 2021/09/27 00:22:51 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ra(t_stack *head)
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
