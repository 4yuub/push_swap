/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarafi <akarafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 00:31:43 by akarafi           #+#    #+#             */
/*   Updated: 2021/12/24 00:38:15 by akarafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	partition(int *array, int start, int end)
{
	int	b;
	int	pivot;
	int	tmp;
	int	i;

	pivot = array[end];
	b = start - 1;
	i = start - 1;
	while (++i <= end)
	{
		if (array[i] <= pivot)
		{
			tmp = array[i];
			array[i] = array[++b];
			array[b] = tmp;
		}
	}
	return (b);
}

void	quick_sort(int *array, int start, int end)
{
	int	pivot;

	if (start >= end)
		return ;
	pivot = partition(array, start, end);
	quick_sort(array, start, pivot - 1);
	quick_sort(array, pivot + 1, end);
}
