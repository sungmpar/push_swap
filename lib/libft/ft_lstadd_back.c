/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 07:35:55 by sungmpar          #+#    #+#             */
/*   Updated: 2020/11/02 11:47:27 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*np;

	if (!alst)
		return ;
	if (alst && *alst)
	{
		np = *alst;
		while (np->next)
			np = np->next;
		np->next = new;
	}
	else if (alst)
		*alst = new;
}
