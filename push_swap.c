/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarafi <akarafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 16:36:46 by akarafi           #+#    #+#             */
/*   Updated: 2021/12/22 21:33:47 by akarafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	print_all(t_node *a)
{
	while (a)
	{
		printf("%ld\n", a->number);
		a = a->next;
	}
}

int	main(int ac, char **av)
{
	t_node	*a;
	t_node	*b;
	t_list	*garbage;

	if (ac < 2)
		return (0);
	init(&a, &b, av, &garbage);
	// code here
	print_all(a);
	free_all(&garbage, &a, &b);
}
