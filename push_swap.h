/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarafi <akarafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 16:40:40 by akarafi           #+#    #+#             */
/*   Updated: 2021/12/22 18:23:25 by akarafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>

// stack:
typedef struct s_node
{
	long			number;
	struct s_node	*next;
}					t_node;

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

#endif