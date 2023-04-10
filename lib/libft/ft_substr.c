/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 00:47:28 by sungmpar          #+#    #+#             */
/*   Updated: 2020/10/30 04:42:29 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*heap;

	if (s == NULL)
		return (NULL);
	heap = (char *)malloc(sizeof(char) * (len + 1));
	if (!heap)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		*heap = '\0';
		return (heap);
	}
	else if (s)
		ft_strlcpy(heap, s + start, len + 1);
	return (heap);
}
