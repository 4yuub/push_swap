/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarafi <akarafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 19:28:57 by akarafi           #+#    #+#             */
/*   Updated: 2021/12/26 01:21:15 by akarafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static char	*get_memory(char const *s, unsigned int start, size_t len)
{
	size_t	i;

	i = 0;
	while (s[start + i] && i < len)
		i++;
	return (malloc(i + 1));
}

static char	*ft_substr(char const *s, int start, int len)
{
	char	*sub;
	int	i;

	if (!s)
		return (0);
	if (start < ft_strlen(s))
	{
		sub = get_memory(s, start, len);
		if (!sub)
			return (sub);
		i = 0;
		while (s[start] && i < len)
			sub[i++] = s[start++];
		sub[i] = '\0';
		return (sub);
	}
	sub = malloc(1);
	if (!sub)
		return (sub);
	sub[0] = 0;
	return (sub);
}

static int	ft_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			if ((s[i - 1] == c || i == 0))
				count++;
			i++;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c, t_list **garbage)
{
	char		**tab;
	int			i;
	int			len;

	i = 0;
	if (!s)
		return (0);
	tab = (char **)malloc((ft_count(s, c) + 1) * sizeof(*tab));
	if (!tab)
		return (tab);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		if (len != 0)
			tab[i++] = ft_substr(s, 0, len);
		if (len != 0)
			add_garbge(tab[i - 1], garbage);
		s += len;
	}
	return (tab[i] = NULL, add_garbge(tab, garbage), tab);
}
