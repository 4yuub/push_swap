/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarafi <akarafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 07:28:17 by akarafi           #+#    #+#             */
/*   Updated: 2021/12/26 01:40:30 by akarafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_node	*a;
	t_node	*b;
	t_list	*garbage;

	if (ac < 2)
		return (0);
	init(&a, &b, av, &garbage);
	apply_actions(&a, &b, &garbage);
	if (is_sorted(a) && !b)
		print("OK");
	else
		print("KO");
	free_all(&garbage, &a, &b);
}
