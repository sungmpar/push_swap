/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 01:45:05 by sungmpar          #+#    #+#             */
/*   Updated: 2020/10/29 08:21:55 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		count;
	int		sign;
	long	intstr;

	count = 0;
	sign = 1;
	intstr = 0;
	while (str[count] == ' ' || (9 <= str[count] && str[count] <= 13))
		count++;
	if (str[count] == '-')
	{
		sign = -1;
		count++;
	}
	else if (str[count] == '+')
		count++;
	while ((str[count]) && '0' <= str[count] && str[count] <= '9')
	{
		intstr = (str[count++] - '0') + (intstr * 10);
		if (intstr < 0 && sign == 1)
			return (-1);
		else if (intstr < 0 && sign == -1)
			return (0);
	}
	return (intstr * sign);
}
