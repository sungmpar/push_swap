/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 01:37:23 by sungmpar          #+#    #+#             */
/*   Updated: 2021/09/27 00:22:45 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	zero_pa(t_stack *head, t_stack *b_head)
{
	t_stack	*tmp;

	tmp = b_head->next;
	b_head->next->next->prev = b_head;
	b_head->next = b_head->next->next;
	head->next = tmp;
	head->prev = tmp;
	tmp->next = head;
	tmp->prev = head;
	head->n++;
	b_head->n--;
}

void	one_pa(t_stack *head, t_stack *b_head)
{
	t_stack	*tmp;
	t_stack	*tmp_b;

	tmp = b_head->next;
	tmp_b = head->next;
	head->next = tmp;
	tmp->next = tmp_b;
	tmp->prev = head;
	tmp_b->prev = tmp;
	b_head->next = NULL;
	b_head->prev = NULL;
	head->n++;
	b_head->n--;
}

void	other_pa(t_stack *head, t_stack *b_head)
{
	t_stack	*tmp;
	t_stack	*tmp_b;

	tmp = b_head->next;
	tmp_b = head->next;
	b_head->next->next->prev = b_head;
	b_head->next = b_head->next->next;
	head->next = tmp;
	tmp->next = tmp_b;
	tmp->prev = head;
	tmp_b->prev = tmp;
	head->n++;
	b_head->n--;
}

int	pa(t_stack *head, t_stack *b_head)
{
	if (b_head->n == 0)
		return (0);
	if (head->n == 0)
	{
		zero_pa(head, b_head);
		return (0);
	}
	if (b_head->n == 1)
	{
		one_pa(head, b_head);
		return (0);
	}
	other_pa(head, b_head);
	return (0);
}
