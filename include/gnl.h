/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarafi <akarafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 18:59:54 by akarafi           #+#    #+#             */
/*   Updated: 2021/12/25 07:36:10 by akarafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GNL_H
# define GNL_H
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# define BUFFER_SIZE 1

char	*get_next_line(int fd);
char	*add_buffer_to_full(char *buffer, char *full);
int		ft_strlen(char *s);
void	ft_strcat(char *dst, char *src);
char	*ft_strdup( char *s1);
char	*trim(char *full);
char	*get_line(char *full);
int		line_in_full(char *full);
char	*line_or_null(char *full);
char	*main_func(int fd);

#endif