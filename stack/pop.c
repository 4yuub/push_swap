/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarafi <akarafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 18:08:14 by akarafi           #+#    #+#             */
/*   Updated: 2021/12/22 18:08:32 by akarafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pop(t_node **stack)
{
	t_node	*tmp;

	if (!stack || !*stack)
		return ;
	tmp = (*stack)->next;
	free(*stack);
	(*stack) = tmp;
}
