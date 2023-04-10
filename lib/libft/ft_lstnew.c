/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 19:34:26 by sungmpar          #+#    #+#             */
/*   Updated: 2020/11/01 07:20:47 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*heap;

	heap = (t_list *)malloc(sizeof(*heap));
	if (!heap)
		return (NULL);
	heap->content = content;
	heap->next = NULL;
	return (heap);
}
