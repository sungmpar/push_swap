/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 23:17:07 by sungmpar          #+#    #+#             */
/*   Updated: 2020/10/29 00:20:02 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				count;
	unsigned const char	*adds1;
	unsigned const char	*adds2;

	count = 0;
	adds1 = (unsigned const char *)s1;
	adds2 = (unsigned const char *)s2;
	while (n)
	{
		if (adds1[count] != adds2[count])
			return (adds1[count] - adds2[count]);
		if (adds1[count] == 0 && adds2[count] == 0)
			break ;
		count++;
		n--;
	}
	return (0);
}
