/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_all_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 05:32:28 by sungmpar          #+#    #+#             */
/*   Updated: 2021/09/27 00:22:17 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	free_b(t_stack *b_head)
{
	int		num;
	t_stack	*tmp_ptr;
	t_stack	*ptr;

	if (b_head->n == 1)
		free(b_head->next);
	if (b_head->n > 1)
	{
		num = 0;
		tmp_ptr = b_head->next;
		while (num++ < b_head->n)
		{
			tmp_ptr = tmp_ptr->next;
			ptr = tmp_ptr->prev;
			free(ptr);
			ptr = 0;
		}
	}
}

int	free_all(t_stack *head, t_stack *b_head, t_info *info)
{
	int		num;
	t_stack	*tmp_ptr;
	t_stack	*ptr;

	free_b(b_head);
	if (head->n == 1)
		free(head->next);
	if (head->n > 1)
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
	free(info);
	return (0);
}
