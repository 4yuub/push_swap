/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   garbage.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarafi <akarafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 19:12:56 by akarafi           #+#    #+#             */
/*   Updated: 2021/12/22 20:13:31 by akarafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	clear(t_list **garbage)
{
	t_list	*tmp;

	while (*garbage)
	{
		tmp = (*garbage)->next;
		free((*garbage)->ptr);
		free(*garbage);
		*garbage = tmp;
	}
}

void	add_garbge(void *ptr, t_list **garbage)
{
	t_list	*lst;

	if (!ptr || !garbage)
		return ;
	lst = malloc(sizeof(t_list));
	lst->ptr = ptr;
	lst->next = (*garbage);
	(*garbage) = lst;
}

void	free_all(t_list **garbage, t_node **a, t_node **b)
{
	clear(garbage);
	while (a && *a)
		pop(a);
	while (b && *b)
		pop(b);
}
