/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 01:36:32 by sungmpar          #+#    #+#             */
/*   Updated: 2021/09/27 00:22:53 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

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
	return (0);
}
