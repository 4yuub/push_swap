# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akarafi <akarafi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/26 01:23:01 by akarafi           #+#    #+#              #
#    Updated: 2021/12/26 02:01:00 by akarafi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

INC = include

Stack = add.c create.c pop.c push.c rotate.c swap.c
Sort = sort.c quick_sort.c sort_tools.c sort3.c sort5.c
Output = output.c
Parse = ft_atoi.c ft_split.c init.c
BONUS = actions.c checker.c ft_memcmp.c
GNL = gnl/gnl.c gnl/gnl_utils.c

SRCS =	$(addprefix output/, $(Output))\
		$(addprefix sorting/, $(Sort))\
		$(addprefix stack/, $(Stack))\
		$(addprefix parsing/, $(Parse))\
		garbage.c\
		push_swap.c
		
CHECKER_SRCS =	$(addprefix output/, $(Output))\
		$(addprefix sorting/, $(Sort))\
		$(addprefix stack/, $(Stack))\
		$(addprefix parsing/, $(Parse))\
		$(addprefix bonus/, $(BONUS))\
		$(addprefix bonus/, $(GNL))\
		garbage.c

OBJS = $(SRCS:.c=.o)
C_OBJS = $(CHECKER_SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf 

all: $(NAME)

$(NAME):$(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo -e '\033[92m'
	@echo ██████╗░██╗░░░██╗░██████╗██╗░░██╗  ░██████╗░██╗░░░░░░░██╗░█████╗░██████╗░
	@echo ██╔══██╗██║░░░██║██╔════╝██║░░██║  ██╔════╝░██║░░██╗░░██║██╔══██╗██╔══██╗
	@echo ██████╔╝██║░░░██║╚█████╗░███████║  ╚█████╗░░╚██╗████╗██╔╝███████║██████╔╝
	@echo ██╔═══╝░██║░░░██║░╚═══██╗██╔══██║  ░╚═══██╗░░████╔═████║░██╔══██║██╔═══╝░
	@echo ██║░░░░░╚██████╔╝██████╔╝██║░░██║  ██████╔╝░░╚██╔╝░╚██╔╝░██║░░██║██║░░░░░
	@echo ╚═╝░░░░░░╚═════╝░╚═════╝░╚═╝░░╚═╝  ╚═════╝░░░░╚═╝░░░╚═╝░░╚═╝░░╚═╝╚═╝░░░░░
	@echo ''

bonus:$(C_OBJS)
	@$(CC) $(CFLAGS) $(C_OBJS) -o Checker
	@echo "Checker compiled successfully"


%.o:%.c $(INC)
	@$(CC) $(CFLAGS) -c $< -o $@ -I $(INC)

re: fclean all

clean:
	@$(RM) $(OBJS) $(C_OBJS)
	@echo "object files removed successfully"

fclean:clean
	@$(RM) $(NAME) Checker
	@echo "push_swap program removed successfully"