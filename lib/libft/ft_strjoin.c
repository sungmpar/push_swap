/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 02:35:44 by sungmpar          #+#    #+#             */
/*   Updated: 2020/10/30 04:12:15 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*heap;
	size_t	count;
	size_t	plus;

	count = 0;
	plus = 0;
	if (!s1 || !s2)
		return (NULL);
	heap = malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!heap)
		return (NULL);
	while (s1[count])
	{
		heap[count] = s1[count];
		count++;
	}
	while (s2[plus])
	{
		heap[count] = s2[plus];
		count++;
		plus++;
	}
	heap[count] = '\0';
	return (heap);
}
