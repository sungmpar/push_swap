/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_up.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 02:05:46 by sungmpar          #+#    #+#             */
/*   Updated: 2021/06/29 20:05:52 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*list_up(t_stack *prev, t_stack *node)
{
	prev->next = node;
	node->prev = prev;
	node->next = NULL;
	return (node);
}
