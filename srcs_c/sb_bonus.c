/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 01:32:43 by sungmpar          #+#    #+#             */
/*   Updated: 2021/09/27 00:23:11 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	sb(t_stack *b_head)
{
	if (b_head->n < 2)
		return (0);
	b_head->next->prev = b_head->next->next;
	b_head->next->next = b_head->next->next->next;
	b_head->next->prev->prev = b_head;
	b_head->next->prev->next = b_head->next;
	b_head->next->next->prev = b_head->next;
	b_head->next = b_head->next->prev;
	return (0);
}
