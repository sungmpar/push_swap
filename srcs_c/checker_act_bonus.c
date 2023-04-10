/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_act_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 02:23:17 by sungmpar          #+#    #+#             */
/*   Updated: 2021/09/27 02:55:33 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	check_line_error(t_stack *head, t_stack *b_head, t_info *info, char **s)
{
	error_print();
	free(*s);
	*s = 0;
	free_all(head, b_head, info);
	exit(0);
}

void	check_line(t_stack *head, t_stack *b_head, t_info *info, char **line)
{
	if (!ft_strncmp(*line, "pa\n", 4))
		pa(head, b_head);
	else if (!ft_strncmp(*line, "pb\n", 4))
		pb(head, b_head);
	else if (!ft_strncmp(*line, "sa\n", 4))
		sa(head);
	else if (!ft_strncmp(*line, "sb\n", 4))
		sb(b_head);
	else if (!ft_strncmp(*line, "ra\n", 4))
		ra(head);
	else if (!ft_strncmp(*line, "rb\n", 4))
		rb(b_head);
	else if (!ft_strncmp(*line, "rr\n", 4))
		rr(head, b_head);
	else if (!ft_strncmp(*line, "rra\n", 5))
		rra(head);
	else if (!ft_strncmp(*line, "rrb\n", 5))
		rrb(b_head);
	else if (!ft_strncmp(*line, "rrr\n", 5))
		rrr(head, b_head);
	else
		check_line_error(head, b_head, info, line);
}

int	checker_act(t_stack *head, t_stack *b_head, t_info *info)
{
	char	*line;
	int		ret;

	line = 0;
	while (1)
	{
		ret = get_next_line(0, &line);
		if (ret == 0 && *line != 0)
			check_line(head, b_head, info, &line);
		if (ret == 0)
		{
			free(line);
			if (asc_check(head) == head->n - 1)
				write(1, "OK\n", 3);
			else
				write(1, "KO\n", 3);
			free_all(head, b_head, info);
			exit(0);
		}
		if (ret != 0)
			check_line(head, b_head, info, &line);
		free(line);
		line = 0;
	}
	return (0);
}
