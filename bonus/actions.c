/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarafi <akarafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 07:31:41 by akarafi           #+#    #+#             */
/*   Updated: 2021/12/25 08:29:30 by akarafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "gnl/gnl.h"

void	do_action(char *action, t_node **a, t_node **b)
{
	if (ft_memcmp(action, "sa", 2) || ft_memcmp(action, "ss", 2))
		swap(*a, 0);
	if (ft_memcmp(action, "sb", 2) || ft_memcmp(action, "ss", 2))
		swap(*b, 0);
	if (ft_memcmp(action, "pa", 2))
		push(b, a, 0);
	if (ft_memcmp(action, "pb", 2))
		push(a, b, 0);
	if (ft_memcmp(action, "ra", 2) || ft_memcmp(action, "rr", 2))
		rotate(*a, 0);
	if (ft_memcmp(action, "rb", 2) || ft_memcmp(action, "rr", 2))
		rotate(*b, 0);
	if (ft_memcmp(action, "rra", 3) || ft_memcmp(action, "rrr", 3))
		reverse_rotate(*a, 0);
	if (ft_memcmp(action, "rrb", 3) || ft_memcmp(action, "rrr", 3))
		reverse_rotate(*b, 0);
}

bool	is_action(char *s)
{
	return (ft_memcmp(s, "sa", 2) || ft_memcmp(s, "ss", 2)
		|| ft_memcmp(s, "sb", 2) || ft_memcmp(s, "ra", 2)
		|| ft_memcmp(s, "rb", 2) || ft_memcmp(s, "rr", 2)
		|| ft_memcmp(s, "pb", 2) || ft_memcmp(s, "pa", 2)
		|| ft_memcmp(s, "rra", 3) || ft_memcmp(s, "rrb", 3)
		|| ft_memcmp(s, "rrr", 3));
}

void	apply_actions(t_node **a, t_node **b, t_list **garbage)
{
	char	*action;

	while (true)
	{
		action = get_next_line(0);
		if (!action)
			break ;
		add_garbge(action, garbage);
		if (!is_action(action))
		{
			print("Error");
			free_all(garbage, a, b);
			exit(0);
		}
		do_action(action, a, b);
	}
}
