/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 00:08:56 by sungmpar          #+#    #+#             */
/*   Updated: 2020/10/19 03:57:36 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*adddest;
	unsigned const char	*addsrc;
	size_t				count;

	adddest = (unsigned char *)dest;
	addsrc = (unsigned const char *)src;
	count = 0;
	while (n)
	{
		adddest[count] = addsrc[count];
		if (addsrc[count] == (unsigned char)c)
			return (adddest + count + 1);
		count++;
		n--;
	}
	return (NULL);
}
