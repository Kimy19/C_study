/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaekim <yaekim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:32:44 by yaekim            #+#    #+#             */
/*   Updated: 2023/12/30 22:25:38 by yaekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

char		*get_next_line(int fd);
size_t		ft_strlcpy(char *dest, const char *src, size_t size);
char		*ft_strdup(const char *s1);
size_t		ft_strlen(char const *str);
long long	check_line(char *str);
void		join_str(char **str, char *buff);

#endif
