/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarafi <akarafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 16:49:47 by akarafi           #+#    #+#             */
/*   Updated: 2021/12/26 01:20:23 by akarafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*new_node(int n)
{
	t_node	*node;

	node = (t_node *)malloc(sizeof(t_node));
	node->number = n;
	node->next = NULL;
	return (node);
}
