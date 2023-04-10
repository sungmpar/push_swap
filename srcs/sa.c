/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 01:32:43 by sungmpar          #+#    #+#             */
/*   Updated: 2021/07/30 23:09:33 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sa(t_stack *head)
{
	if (head->n < 2)
		return (0);
	head->next->prev = head->next->next;
	head->next->next = head->next->next->next;
	head->next->prev->prev = head;
	head->next->prev->next = head->next;
	head->next->next->prev = head->next;
	head->next = head->next->prev;
	write(1, "sa\n", 3);
	return (0);
}
