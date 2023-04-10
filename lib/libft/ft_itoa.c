/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 19:11:29 by sungmpar          #+#    #+#             */
/*   Updated: 2020/11/14 19:08:41 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	intlen(int inte)
{
	int	count;

	count = 0;
	if (inte < 0)
		count = 1;
	while (inte)
	{
		inte /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*heap;
	int		size;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	size = intlen(n);
	heap = (char *)malloc(sizeof(char) * (size + 1));
	if (!heap)
		return (NULL);
	if (n < 0)
	{
		heap[0] = '-';
		n *= -1;
	}
	heap[size--] = '\0';
	while (size >= 0 && n > 0)
	{
		heap[size] = n % 10 + '0';
		n /= 10;
		size--;
	}
	return (heap);
}
