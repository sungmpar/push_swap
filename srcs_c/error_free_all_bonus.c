/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_free_all_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 05:32:28 by sungmpar          #+#    #+#             */
/*   Updated: 2021/09/27 00:21:54 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	error_free_all(t_stack *head, t_stack *b_head, long long value)
{
	int		num;
	t_stack	*tmp_ptr;
	t_stack	*ptr;

	if (head->n == 1 && value == 4200000042)
		free(head->next);
	if (head->n > 1 && value == 4200000042)
	{
		num = 0;
		tmp_ptr = head->next;
		while (num++ < head->n)
		{
			tmp_ptr = tmp_ptr->next;
			ptr = tmp_ptr->prev;
			free(ptr);
			ptr = 0;
		}
	}
	free(head);
	free(b_head);
	return (0);
}
