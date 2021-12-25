/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarafi <akarafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 16:36:46 by akarafi           #+#    #+#             */
/*   Updated: 2021/12/25 07:29:01 by akarafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	t_node	*a;
	t_node	*b;
	t_list	*garbage;
	int		size;

	if (ac < 2)
		return (0);
	init(&a, &b, av, &garbage);
	size = get_size(a);
	if (size <= 3)
		sort3(&a, size);
	if (size <= 5)
		sort5(&a, &b, size);
	else
		sort(&a, &b, size, &garbage);
	free_all(&garbage, &a, &b);
}
