/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 01:11:08 by sungmpar          #+#    #+#             */
/*   Updated: 2020/11/03 05:52:14 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*now;
	t_list	*and;

	if (!*lst || !lst || !del)
		return ;
	now = *lst;
	while (now)
	{
		and = now->next;
		ft_lstdelone(now, del);
		now = and;
	}
	*lst = NULL;
}
