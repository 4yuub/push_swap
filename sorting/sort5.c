/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarafi <akarafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 19:24:15 by akarafi           #+#    #+#             */
/*   Updated: 2021/12/26 01:21:01 by akarafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort5(t_node **a, t_node **b, int size)
{
	int	min;

	while (!is_sorted(*a) && size > 3)
	{
		min = get_min(*a);
		if ((*a)->number != min)
		{
			if (is_in_bottom(min, size, *a))
				reverse_rotate(*a, "rra");
			else
				rotate(*a, "ra");
			continue ;
		}
		push(a, b, "pb");
		size--;
	}
	sort3(a, size);
	while (*b)
		push(b, a, "pa");
}
