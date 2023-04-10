/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 17:01:01 by sungmpar          #+#    #+#             */
/*   Updated: 2020/10/28 03:19:21 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*adds;
	char	charc;
	int		count;

	adds = (char *)str;
	charc = (char)c;
	count = 0;
	while (adds[count])
		count++;
	while (0 <= count)
	{
		if (adds[count] == charc)
			return (&adds[count]);
		count--;
	}
	return (NULL);
}
