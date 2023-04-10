/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 01:14:02 by sungmpar          #+#    #+#             */
/*   Updated: 2020/10/29 04:06:21 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*heap;
	size_t	count;

	count = 0;
	heap = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (heap == 0)
		return (0);
	while (s1[count])
	{
		heap[count] = s1[count];
		count++;
	}
	heap[count] = '\0';
	return (heap);
}
