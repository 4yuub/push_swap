/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarafi <akarafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 16:36:46 by akarafi           #+#    #+#             */
/*   Updated: 2021/12/22 20:44:25 by akarafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	t_node	*a;
	t_node	*b;
	t_list	*garbage;
	bool	error;

	if (ac < 2)
		return (0);
	error = false;
	init(&a, &b, av, &garbage);
	// code here
	free_all(garbage, a, b);
}
