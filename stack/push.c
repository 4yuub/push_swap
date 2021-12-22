/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarafi <akarafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 16:53:22 by akarafi           #+#    #+#             */
/*   Updated: 2021/12/22 18:25:48 by akarafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_node **stack1, t_node **stack2, char *str)
{
	t_node	*tmp;

	if (!stack2 || !stack1 || !*stack1)
		return ;
	tmp = (*stack1)->next;
	(*stack1)->next = (*stack2);
	*stack2 = (*stack1);
	*stack1 = tmp;
	if (!str)
		return ;
	print(str);
}
