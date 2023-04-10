/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 02:04:40 by sungmpar          #+#    #+#             */
/*   Updated: 2020/10/28 05:52:55 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	count;
	size_t	len;

	count = 0;
	len = 0;
	if (dst == 0 || src == 0)
		return (0);
	while (src[len])
		len++;
	if (1 <= size)
	{
		while (count < len && count < size - 1)
		{
			dst[count] = src[count];
			count++;
		}
		dst[count] = 0;
	}
	return (len);
}
