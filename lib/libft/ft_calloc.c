/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 00:51:33 by sungmpar          #+#    #+#             */
/*   Updated: 2020/10/29 01:10:17 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*heap;

	heap = (void *)malloc(count * size);
	if (heap == 0)
		return (0);
	ft_memset(heap, 0, count * size);
	return (heap);
}
