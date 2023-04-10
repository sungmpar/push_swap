/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 00:59:02 by sungmpar          #+#    #+#             */
/*   Updated: 2021/09/27 05:54:06 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	stack_up(int argc, char *argv[], t_stack *head, t_info *info)
{
	info->ptr = head;
	while (info->num++ < argc - 1 && info->value != 4200000042)
	{
		info->tmp = NULL;
		info->count = 0;
		info->tmp = ft_split(argv[info->num], ' ');
		if (info->tmp[info->count] == NULL)
			info->value = 4200000042;
		while (info->tmp[info->count] && info->value != 4200000042)
		{
			info->value = s_atoi(info->tmp[info->count]);
			if (info->value != 4200000042)
			{
				info->ptr = list_up(info->ptr, make_list(info->value));
				head->n++;
			}
			free(info->tmp[info->count++]);
		}
		while (info->tmp[info->count] && info->value == 4200000042)
			free(info->tmp[info->count++]);
		free(info->tmp);
	}
	info->ptr->next = head;
	head->prev = info->ptr;
}

void	error_handling(t_stack *head, t_stack *b_head, t_info *info)
{
	error_print();
	error_free_all(head, b_head, info->value);
	free(info);
	exit (0);
}

void	final_check(t_stack *head, t_stack *b_head, t_info *info)
{
	if (overlap_check(head) == 42)
	{
		free_all(head, b_head, info);
		error_print();
		exit (0);
	}
}

int	main(int argc, char *argv[])
{
	t_info	*info;
	t_stack	*b_head;
	t_stack	*head;

	if (argc < 2)
		return (0);
	info = malloc(sizeof(struct s_info));
	if (!info)
		exit (1);
	b_head = malloc(sizeof(struct s_stack));
	if (!b_head)
		exit (1);
	head = malloc(sizeof(struct s_stack));
	if (!head)
		exit (1);
	ft_init(head, b_head, info);
	stack_up(argc, argv, head, info);
	if (info->value == 4200000042)
		error_handling(head, b_head, info);
	final_check(head, b_head, info);
	checker_act(head, b_head, info);
	return (0);
}
