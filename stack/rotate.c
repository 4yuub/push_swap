/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarafi <akarafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 18:11:36 by akarafi           #+#    #+#             */
/*   Updated: 2021/12/22 18:27:09 by akarafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate(t_node *stack, char *str)
{
	if (!stack || !(stack->next))
		return ;
	while (stack)
	{
		swap(stack, 0);
		stack = stack->next;
	}
	if (!str)
		return ;
	print(str);
}

void	reverse_rotate(t_node *stack, char *str)
{
	if (!stack || !(stack->next))
		return ;
	reverse_rotate(stack->next, 0);
	swap(stack, 0);
	if (!str)
		return ;
	print(str);
}
