# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sungmpar <sungmpar@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/29 00:22:20 by sungmpar          #+#    #+#              #
#    Updated: 2021/09/27 02:58:13 by sungmpar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = $(PUSH_SWAP)

CC = gcc

PUSH_SWAP = push_swap
CHECKER = checker

CFLAG = -Wall -Wextra -Werror

SRC_NAME = push_swap.c \
					pa.c \
					pb.c \
					ra.c \
					rb.c \
					rra.c \
					rrb.c \
					sa.c \
					sb.c \
					rr.c \
					rrr.c \
					find_min.c \
					find_max.c \
					make_list.c \
					list_up.c \
					hundred_sort.c \
					five_hundred_sort.c \
					three_sort.c \
					sort.c \
					asc_check.c \
					s_atoi.c \
					error_print.c \
					overlap_check.c \
					five_sort.c \
					hundred.c \
					b_hundred.c \
					snd_b_hundred.c \
					b_fifty.c \
					snd_b_fifty.c \
					error_free_all.c \
					free_all.c \
					ft_init.c \

SRC_C_NAME = checker_bonus.c \
					pa_bonus.c \
					pb_bonus.c \
					ra_bonus.c \
					rb_bonus.c \
					rra_bonus.c \
					rrb_bonus.c \
					sa_bonus.c \
					sb_bonus.c \
					rr_bonus.c \
					rrr_bonus.c \
					find_min_bonus.c \
					find_max_bonus.c \
					make_list_bonus.c \
					list_up_bonus.c \
					asc_check_bonus.c \
					s_atoi_bonus.c \
					error_print_bonus.c \
					overlap_check_bonus.c \
					error_free_all_bonus.c \
					free_all_bonus.c \
					ft_init_bonus.c \
					checker_act_bonus.c\
					get_next_line_bonus.c

SRC_PATH = ./srcs/
SRC =	$(addprefix $(SRC_PATH), $(SRC_NAME))
OBJ_NAME = $(SRC_NAME:.c=.o)
OBJ =	$(addprefix $(SRC_PATH), $(OBJ_NAME))

SRC_C_PATH = ./srcs_c/
SRC =	$(addprefix $(SRC_C_PATH), $(SRC_C_NAME))
OBJ_C_NAME = $(SRC_C_NAME:.c=.o)
OBJ_C =	$(addprefix $(SRC_C_PATH), $(OBJ_C_NAME))

HEADER = ./includes/
LIB = -L./lib/libft -lft
LIBFT = ./lib/libft/libft.a
RM	= rm -rf

$(SRC_PATH)%.o: $(SRC_PATH)%.c
	$(CC) $(CFLAG) -I $(HEADER) -o $@ -c $<

$(SRC_C_PATH)%.o: $(SRC_C_PATH)%.c
	$(CC) $(CFLAG) -I $(HEADER) -o $@ -c $<

$(PUSH_SWAP) : $(OBJ) $(LIBFT)
	$(CC) -o $(PUSH_SWAP) $(OBJ) -I $(HEADER) $(CFLAG) $(LIB)

$(CHECKER) : $(OBJ_C) $(LIBFT)
	$(CC) -o $(CHECKER) $(OBJ_C) -I $(HEADER) $(CFLAG) $(LIB)

ifdef WITH_BONUS
    NAME = $(CHECKER) $(PUSH_SWAP) 
else
    NAME = $(PUSH_SWAP) 
endif

bonus :
	make WITH_BONUS=1 all

all	: $(NAME)


$(LIBFT):
	$(MAKE) -C lib/libft
	# cp lib/libft/libft.a .

clean	:
	$(MAKE) -C lib/libft clean
	rm -rf $(OBJ)
	rm -rf $(OBJ_C)

fclean	: clean
	$(MAKE) -C lib/libft fclean
	rm -rf $(PUSH_SWAP) $(CHECKER)

re		: fclean all

.PHONY: all clean fclean re
