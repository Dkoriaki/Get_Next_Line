/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoriaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 14:36:41 by dkoriaki          #+#    #+#             */
/*   Updated: 2020/02/05 14:43:48 by dkoriaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

int		ft_strlen(char *str, int m);
char	*ft_strjoin(char *s1, char *s2);
int		ft_eol(char *str);
int		ft_return(char **line, char *result, char **tmp, int ret);
int		get_next_line(int fd, char **line);
char	*ft_substr(char *str, unsigned int start, int len);
char	*ft_null(void);
char	*ft_result(char *buffer, char *result, int ret);

#endif
