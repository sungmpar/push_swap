/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_atoi_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 03:12:33 by sungmpar          #+#    #+#             */
/*   Updated: 2021/09/27 00:23:06 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

long long	s_atoi(const char *str)
{
	int			count;
	int			sign;
	long long	intstr;

	count = 0;
	sign = 1;
	intstr = 0;
	if (str[count] == '+' || str[count] == '-')
	{
		if (str[count++] == '-')
			sign = -1;
		if (str[count] == '\0')
			return (4200000042);
	}
	while (str[count] != '\0')
	{
		if (str[count] < '0' || '9' < str[count])
			return (4200000042);
		intstr = (str[count++] - '0') + (intstr * 10);
		if (intstr > 2147483648 && sign == -1)
			return (4200000042);
		if (intstr > 2147483647 && sign == 1)
			return (4200000042);
	}
	return (intstr * sign);
}
