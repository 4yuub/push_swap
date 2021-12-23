/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tools.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarafi <akarafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 03:08:21 by akarafi           #+#    #+#             */
/*   Updated: 2021/12/23 19:16:39 by akarafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

bool	is_sorted(t_node *stack)
{
	while (stack && stack->next)
	{
		if (stack->number > stack->next->number)
			return (false);
		stack = stack->next;
	}
	return (true);
}

int	get_size(t_node *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		i++;
		stack = stack->next;
	}
	return (i);
}

int	get_max(t_node *stack)
{
	int	max;

	max = stack->number;
	while (stack)
	{
		if (stack->number > max)
			max = stack->number;
		stack = stack->next;
	}
	return (max);
}
