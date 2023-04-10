/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 03:55:04 by sungmpar          #+#    #+#             */
/*   Updated: 2021/07/31 00:56:53 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	s_snd(t_stack *head, t_stack *b_head, t_info *info)
{
	while (b_head->n > 2)
	{
		find_max(b_head, info);
		if (b_head->next->n == info->max)
			pa(head, b_head);
		find_max(b_head, info);
		if (b_head->n / 2 < info->max_target)
			rrb(b_head);
		else if (b_head->n / 2 >= info->max_target)
			rb(b_head);
	}
	find_max(b_head, info);
	if (b_head->next->n != info->max)
		rb(b_head);
	pa(head, b_head);
	pa(head, b_head);
}

void	s_first(t_stack *head, t_stack *b_head, t_info *info, int new)
{
	while (head->n > 2)
	{
		find_min(head, info);
		if (head->next->n == info->min)
			pb(head, b_head);
		find_min(head, info);
		if (head->n / 2 < info->target)
			rra(head);
		else if (head->n / 2 >= info->target)
			ra(head);
	}
	find_max(head, info);
	if (head->next->n == info->max)
		ra(head);
	while (new-- > 2)
		pa(head, b_head);
	s_snd(head, b_head, info);
}

void	sort(t_stack *head, t_stack *b_head, t_info *info)
{
	t_stack	*ptr;
	int		divide;
	int		new;

	divide = 1;
	ptr = head->next;
	if (head->n % 2 == 0)
		divide = 0;
	new = (head->n + divide) / 2;
	while (head->n > new)
	{	
		if (ptr->n < info->mid)
			pb(head, b_head);
		else if (ptr->n >= info->mid)
			ra(head);
		ptr = head->next;
	}
	s_first(head, b_head, info, new);
}
