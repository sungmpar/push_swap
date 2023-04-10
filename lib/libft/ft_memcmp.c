/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 19:45:01 by sungmpar          #+#    #+#             */
/*   Updated: 2020/10/19 23:58:33 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*adds1;
	unsigned const char	*adds2;
	size_t				count;

	adds1 = (unsigned const char *)s1;
	adds2 = (unsigned const char *)s2;
	count = 0;
	while (n)
	{
		if (adds1[count] != adds2[count])
			return (adds1[count] - adds2[count]);
		count++;
		n--;
	}
	return (0);
}
