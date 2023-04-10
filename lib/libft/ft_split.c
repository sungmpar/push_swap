/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 03:21:17 by sungmpar          #+#    #+#             */
/*   Updated: 2020/11/09 17:59:28 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*heapfree(char **heap)
{
	size_t	count;

	count = 0;
	while (heap[count])
	{
		free(heap[count]);
		count++;
	}
	free(heap);
	return (NULL);
}

static int	lrow(const char *str, char c)
{
	size_t	count;

	count = 0;
	while (*str != c && *str)
	{
		count++;
		str++;
	}
	return (count);
}

static	int	lcol(const char *str, char c)
{
	size_t	colcount;
	size_t	count;

	colcount = 1;
	count = 0;
	while (str[count] == c && str[count])
		count++;
	if (str[count] == '\0')
		return (0);
	while (str[++count])
	{
		if (str[count] == c && str[count + 1] != c)
			colcount++;
	}
	return (colcount);
}

static char	**twodarr(char **heap, char const *s, char c)
{
	size_t	col;

	col = 0;
	while (*s)
	{
		if (*s != 0 && *s != c)
		{
			heap[col] = (char *)malloc(sizeof(char) * (lrow(s, c) + 1));
			if (!heap)
				return (heapfree(heap));
			ft_strlcpy(heap[col], s, lrow(s, c) + 1);
			col++;
			s = s + lrow(s, c) - 1;
		}
		s++;
	}
	heap[col] = NULL;
	return (heap);
}

char	**ft_split(char const *s, char c)
{
	char	**heap;

	heap = (char **)malloc(sizeof(char *) * (lcol(s, c) + 1));
	if (!s || !heap)
		return (NULL);
	return (twodarr(heap, s, c));
}
