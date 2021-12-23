/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarafi <akarafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 03:05:01 by akarafi           #+#    #+#             */
/*   Updated: 2021/12/23 19:17:27 by akarafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort3(t_node **a, t_node **b, int size)
{
	int	max;

	if (is_sorted(*a))
		return ;
	(void) b;
	max = get_max(*a);
	if (size == 3)
	{
		if (max == (*a)->number)
			rotate(*a, "ra");
		else if (max == (*a)->next->number)
			reverse_rotate(*a, "rra");
	}
	if ((*a)->number > (*a)->next->number)
		swap(*a, "sa");
}
