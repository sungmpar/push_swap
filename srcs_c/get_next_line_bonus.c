/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 17:38:49 by sungmpar          #+#    #+#             */
/*   Updated: 2021/09/27 05:57:10 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	mal_guard(char *str)
{
	if (!(str))
		exit (1);
}

int	gnl_next(int fd, char **line)
{
	int		num;
	int		ret;
	int		count;
	char	*tmp;
	char	buf[1];

	num = 0;
	ret = read(fd, buf, 1);
	while (ret > 0 && buf[0] != '\0')
	{
		tmp = malloc(num++ + 2);
		mal_guard(tmp);
		count = -1;
		while ((*line)[++count] != '\0')
			tmp[count] = (*line)[count];
		tmp[count++] = buf[0];
		tmp[count] = '\0';
		free(*line);
		*line = tmp;
		if (buf[0] == '\n')
			return (1);
		ret = read(fd, buf, 1);
	}
	return (ret);
}

int	get_next_line(int fd, char **line)
{
	int		ret;

	*line = malloc(1);
	mal_guard(*line);
	(*line)[0] = '\0';
	ret = gnl_next(fd, line);
	return (ret);
}
