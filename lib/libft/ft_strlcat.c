/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 03:29:36 by sungmpar          #+#    #+#             */
/*   Updated: 2020/10/28 02:59:06 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstcount;
	size_t	srccount;
	size_t	count;

	dstcount = 0;
	srccount = 0;
	count = 0;
	while (dst[dstcount] && dstcount < size)
		dstcount++;
	while (src[srccount])
		srccount++;
	while (src[count] && dstcount + count + 1 < size)
	{
		dst[dstcount + count] = src[count];
		count++;
	}
	if (dstcount < size)
		dst[dstcount + count] = 0;
	return (dstcount + srccount);
}
