/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 18:56:06 by sungmpar          #+#    #+#             */
/*   Updated: 2020/10/19 23:58:20 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*adds;
	size_t				count;

	adds = (unsigned char *)s;
	count = 0;
	while (n)
	{
		if (adds[count] == (unsigned char)c)
		{
			return ((unsigned char *)adds + count);
		}
		count++;
		n--;
	}
	return (NULL);
}
