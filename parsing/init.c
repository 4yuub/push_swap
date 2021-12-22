/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarafi <akarafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 19:06:41 by akarafi           #+#    #+#             */
/*   Updated: 2021/12/22 20:43:23 by akarafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	fill_stack(t_node **stack, char **tab, bool *error)
{
	int		size;
	t_node	*node;

	size = 0;
	while (tab[size])
		size++;
	while (--size >= 0)
	{
		node = new_node(ft_atoi(tab[size], error));
		add(node, stack);
	}
}

static void	check_duplicates(t_node *stack, bool *error)
{
	t_node	*tmp;

	while (stack)
	{
		tmp = stack->next;
		while (tmp)
		{
			if (tmp->number == stack->number)
				*error = true;
			tmp = tmp->next;
		}
		stack = stack->next;
	}
}

void	init(t_node **a, t_node**b, char **av, t_list **garbage)
{
	int		size;
	char	**tab;
	bool	err;

	*a = NULL;
	*b = NULL;
	size = 0;
	err = false;
	while (av[size])
		size++;
	while (--size > 0)
	{
		tab = ft_split(av[size], ' ', garbage);
		if (!tab)
			err = true;
		fill_stack(a, tab, &err);
		check_duplicates(*a, &err);
		if (err)
		{
			free_all(garbage, a, b);
			error();
			exit(0);
		}
	}
}
