/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarafi <akarafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 00:25:19 by akarafi           #+#    #+#             */
/*   Updated: 2021/12/24 02:22:17 by akarafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	*get_sorted(t_node *stack, int size, t_list **garbage)
{
	int	*sorted;
	int	i;

	sorted = malloc(size * sizeof(int));
	add_garbge(sorted, garbage);
	i = 0;
	while (stack)
	{
		sorted[i++] = stack->number;
		stack = stack->next;
	}
	quick_sort(sorted, 0, size - 1);
	return (sorted);
}

void	back_maxs_from_b(t_node **a, t_node **b)
{
	int	max;
	int	size;

	size = get_size(*b);
	while (*b)
	{
		max = get_max(*b);
		while ((*b)->number != max)
		{
			if (is_in_bottom(max, size, *b))
				reverse_rotate(*b, "rrb");
			else
				rotate(*b, "rb");
		}
		push(b, a, "pa");
		size--;
	}
}

void	sort(t_node **a, t_node **b, int size, t_list **garbage)
{
	int	*sorted;
	int	mid;
	int	size2;

	sorted = get_sorted(*a, size, garbage);
	while (size > 3)
	{
		size2 = size / 2;
		mid = sorted[size2];
		sorted += size2 + 1;
		while (size > size2 && size > 3)
		{
			if ((*a)->number <= mid)
			{
				push(a, b, "pb");
				size--;
			}
			else
				rotate(*a, "ra");
		}
	}
	sort3(a, 3);
	back_maxs_from_b(a, b);
}
