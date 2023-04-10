/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   asc_check_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 01:13:23 by sungmpar          #+#    #+#             */
/*   Updated: 2021/09/27 00:21:39 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	asc_check(t_stack *head)
{
	int		check;
	int		count;
	t_stack	*ptr_prev;
	t_stack	*ptr_next;

	check = 0;
	count = 1;
	ptr_prev = head->next;
	ptr_next = head->next->next;
	while (count++ < head->n)
	{	
		if (ptr_prev->n < ptr_next->n)
		{
			check++;
		}
		ptr_prev = ptr_next;
		ptr_next = ptr_next->next;
	}
	return (check);
}
