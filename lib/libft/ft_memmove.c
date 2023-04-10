/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 00:40:28 by sungmpar          #+#    #+#             */
/*   Updated: 2020/10/28 20:06:36 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*adddest;
	unsigned const char	*addsrc;

	adddest = (unsigned char *)dest;
	addsrc = (unsigned const char *)src;
	if (dest == 0 && src == 0)
		return (0);
	if (dest > src)
	{
		n = n - 1;
		while (n + 1)
		{
			adddest[n] = addsrc[n];
			n--;
		}
	}
	else
	{
		while (n)
		{
			*adddest++ = *addsrc++;
			n--;
		}
	}
	return (dest);
}
