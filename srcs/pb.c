/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 01:45:07 by sungmpar          #+#    #+#             */
/*   Updated: 2021/07/30 23:03:37 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	zero_pb(t_stack *head, t_stack *b_head)
{
	t_stack	*tmp;

	tmp = head->next;
	head->next->next->prev = head;
	head->next = head->next->next;
	b_head->next = tmp;
	b_head->prev = tmp;
	tmp->next = b_head;
	tmp->prev = b_head;
	b_head->n++;
	head->n--;
	write(1, "pb\n", 3);
}

void	one_pb(t_stack *head, t_stack *b_head)
{
	t_stack	*tmp;
	t_stack	*tmp_b;

	tmp = head->next;
	tmp_b = b_head->next;
	b_head->next = tmp;
	tmp->next = tmp_b;
	tmp->prev = b_head;
	tmp_b->prev = tmp;
	head->next = NULL;
	head->prev = NULL;
	b_head->n++;
	head->n--;
	write(1, "pb\n", 3);
}

void	other_pb(t_stack *head, t_stack *b_head)
{
	t_stack	*tmp;
	t_stack	*tmp_b;

	tmp = head->next;
	tmp_b = b_head->next;
	head->next->next->prev = head;
	head->next = head->next->next;
	b_head->next = tmp;
	tmp->next = tmp_b;
	tmp->prev = b_head;
	tmp_b->prev = tmp;
	b_head->n++;
	head->n--;
	write(1, "pb\n", 3);
}

int	pb(t_stack *head, t_stack *b_head)
{
	if (head->n == 0)
		return (0);
	if (b_head->n == 0)
	{
		zero_pb(head, b_head);
		return (0);
	}
	if (head->n == 1)
	{
		one_pb(head, b_head);
		return (0);
	}
	other_pb(head, b_head);
	return (0);
}
