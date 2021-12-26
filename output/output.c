/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarafi <akarafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 16:37:38 by akarafi           #+#    #+#             */
/*   Updated: 2021/12/26 01:21:29 by akarafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	putstr_fd(char *s, int fd)
{
	while (*s)
		write(fd, s++, 1);
}

void	error(void)
{
	putstr_fd("Error\n", 2);
}

void	print(char *s)
{
	putstr_fd(s, 1);
	putstr_fd("\n", 1);
}
