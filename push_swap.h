/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarafi <akarafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 16:40:40 by akarafi           #+#    #+#             */
/*   Updated: 2021/12/22 20:38:10 by akarafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>

// stack:
typedef struct s_node
{
	long			number;
	struct s_node	*next;
}					t_node;

// garbage collector:
typedef struct s_list
{
	void			*ptr;
	struct s_list	*next;
}	t_list;

void	clear(t_list **garbage);
void	add_garbge(void *ptr, t_list **garbage);
void	free_all(t_list **garbage, t_node **a, t_node **b);

// stack utils:
t_node	*new_node(long n);
void	add(t_node *node, t_node **stack);
void	pop(t_node **stack);
void	push(t_node **stack1, t_node **stack2, char *str);
void	swap(t_node *stack, char *str);
void	rotate(t_node *stack, char *str);
void	reverse_rotate(t_node *stack, char *str);

// output:
void	error(void);
void	print(char *s);

// parsing:
void	init(t_node **a, t_node**b, char **av, t_list **garbage);
char	**ft_split(char const *s, char c, t_list **garbage);
long	ft_atoi(const char *str, bool *error);

#endif