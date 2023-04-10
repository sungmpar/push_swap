/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 15:59:30 by sungmpar          #+#    #+#             */
/*   Updated: 2020/10/28 02:57:52 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*adds;
	char	charc;
	size_t	count;

	adds = (char *)str;
	charc = (char)c;
	count = 0;
	while (adds[count])
	{
		if (adds[count] == charc)
			return (&adds[count]);
		count++;
	}
	if (c == 0)
		return (&adds[count]);
	return (NULL);
}
