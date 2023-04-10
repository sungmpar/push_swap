/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 08:24:10 by sungmpar          #+#    #+#             */
/*   Updated: 2020/10/28 09:31:28 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*addhay;
	size_t	count;
	size_t	plus;

	addhay = (char *)haystack;
	count = 0;
	if (needle[0] == '\0')
		return (addhay);
	while (count < len && addhay[count])
	{
		plus = 0;
		while (addhay[count + plus] == needle[plus] && count + plus < len)
		{
			if (needle[++plus] == '\0')
			{
				return (&addhay[count]);
			}
		}
		count++;
	}
	return (0);
}
