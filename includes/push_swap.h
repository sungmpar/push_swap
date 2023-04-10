/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 19:23:51 by sungmpar          #+#    #+#             */
/*   Updated: 2021/09/27 04:36:39 by sungmpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <unistd.h>
# include <stdlib.h>

typedef struct s_info
{
	int				count;
	int				min;
	int				max;
	int				snd_max;
	int				target;
	int				max_target;
	int				five_target;
	int				vs;
	int				five;
	int				divide;
	int				mid;
	int				m_mid;
	int				num;
	int				tmp_num;
	int				rr_count;
	int				div;
	int				act;
	char			**tmp;
	struct s_stack	*ptr;
	long long		value;
}					t_info;

typedef struct s_stack
{
	int				n;
	struct s_stack	*next;
	struct s_stack	*prev;
}					t_stack;

int			sa(t_stack *head);
int			sb(t_stack *b_head);
int			rra(t_stack *head);
int			rrb(t_stack *b_head);
int			ra(t_stack *head);
int			rb(t_stack *b_head);
int			pa(t_stack *head, t_stack *b_head);
int			pb(t_stack *head, t_stack *b_head);
int			rr(t_stack *a_head, t_stack *b_head);
int			rrr(t_stack *a_head, t_stack *b_head);
void		sort(t_stack *head, t_stack *b_head, t_info *info);
t_stack		*list_up(t_stack *prev, t_stack *node);
t_stack		*make_list(int n);
void		find_min(t_stack *head, t_info *info);
void		find_max(t_stack *head, t_info *info);
int			five_hundred_sort(t_stack *head, t_stack *b_head, t_info *info);
int			hundred_sort(t_stack *head, t_stack *b_head, t_info *info);
int			three_sort(t_stack *head, t_info *info);
int			asc_check(t_stack *head);
long long	s_atoi(const char *str);
int			error_print(void);
int			overlap_check(t_stack *head);
int			five_sort(t_stack *head, t_stack *b_head, t_info *info);
int			hundred(t_stack *head, t_stack *b_head, t_info *info);
int			b_hundred(t_stack *head, t_stack *b_head, t_info *info);
int			snd_b_hundred(t_stack *head, t_stack *b_head, t_info *info);
int			b_fifty(t_stack *head, t_stack *b_head, t_info *info);
int			snd_b_fifty(t_stack *head, t_stack *b_head, t_info *info);
int			error_free_all(t_stack *head, t_stack *b_head, long long value);
int			free_all(t_stack *head, t_stack *b_head, t_info *info);
void		ft_init(t_stack *head, t_stack *b_head, t_info *info);

#endif
