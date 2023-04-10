/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   overlap_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 19:58:00 by sungmpar          #+#    #+#             */
/*   Updated: 2021/07/27 08:03:46 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	overlap_check(t_stack *head)
{
	int		check;
	int		count;
	int		num;
	t_stack	*ptr_compare;
	t_stack	*ptr_all;

	count = 0;
	ptr_compare = head;
	ptr_all = head;
	while (count++ < head->n)
	{
		check = 0;
		num = 0;
		ptr_compare = ptr_compare->next;
		ptr_all = head;
		while (num++ < head->n)
		{
			ptr_all = ptr_all->next;
			if (ptr_compare->n == ptr_all->n)
				check++;
		}
		if (check >= 2)
			return (42);
	}
	return (check);
}
