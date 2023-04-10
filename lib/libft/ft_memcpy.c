/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 00:08:56 by sungmpar          #+#    #+#             */
/*   Updated: 2020/10/28 05:17:11 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*adddest;
	unsigned const char	*addsrc;

	adddest = (unsigned char *)dest;
	addsrc = (unsigned const char *)src;
	if (dest == 0 && src == 0)
		return (0);
	while (n)
	{
		*adddest++ = *addsrc++;
		n--;
	}
	return (dest);
}
