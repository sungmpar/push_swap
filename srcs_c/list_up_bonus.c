/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_up_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 02:05:46 by sungmpar          #+#    #+#             */
/*   Updated: 2021/09/27 00:22:36 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

t_stack	*list_up(t_stack *prev, t_stack *node)
{
	prev->next = node;
	node->prev = prev;
	node->next = NULL;
	return (node);
}
