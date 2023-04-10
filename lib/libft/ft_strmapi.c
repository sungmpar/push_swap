/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 15:52:12 by sungmpar          #+#    #+#             */
/*   Updated: 2020/10/30 18:08:54 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*heap;
	size_t	count;

	count = 0;
	if (!s || !f)
		return (NULL);
	heap = ft_strdup((const char *)s);
	if (!heap)
		return (NULL);
	while (heap[count])
	{
		heap[count] = f((unsigned int)count, heap[count]);
		count++;
	}
	return (heap);
}
