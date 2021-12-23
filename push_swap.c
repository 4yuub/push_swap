/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarafi <akarafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 16:36:46 by akarafi           #+#    #+#             */
/*   Updated: 2021/12/23 19:18:37 by akarafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	print_all(t_node *a)
{
	while (a)
	{
		printf("%d\n", a->number);
		a = a->next;
	}
}

int	main(int ac, char **av)
{
	t_node	*a;
	t_node	*b;
	t_list	*garbage;
	int		size;

	if (ac < 2)
		return (0);
	init(&a, &b, av, &garbage);
	// code here
	size = get_size(a);
	if (size <= 3)
		sort3(&a, &b, size);
	print_all(a);
	free_all(&garbage, &a, &b);
}
