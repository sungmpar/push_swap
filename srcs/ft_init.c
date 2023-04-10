/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 18:11:23 by sungmpar          #+#    #+#             */
/*   Updated: 2021/07/30 23:19:22 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_init_next(t_stack *head, t_stack *b_head)
{
	b_head->n = 0;
	b_head->next = 0;
	b_head->prev = 0;
	head->prev = NULL;
	head->next = 0;
	head->n = 0;
}

void	ft_init(t_stack *head, t_stack *b_head, t_info *info)
{
	info->count = 0;
	info->min = 0;
	info->max = 0;
	info->snd_max = 0;
	info->target = 0;
	info->max_target = 0;
	info->five_target = 0;
	info->vs = 0;
	info->five = 0;
	info->divide = 0;
	info->mid = 0;
	info->m_mid = 0;
	info->value = 0;
	info->tmp = NULL;
	info->ptr = NULL;
	info->num = 0;
	info->tmp_num = 0;
	info->rr_count = 0;
	info->div = 0;
	info->act = 0;
	ft_init_next(head, b_head);
}
