/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 01:32:43 by sungmpar          #+#    #+#             */
/*   Updated: 2021/09/27 00:23:08 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

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
	return (0);
}
