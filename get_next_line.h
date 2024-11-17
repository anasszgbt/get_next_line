/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azghibat <azghibat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 21:39:51 by azghibat          #+#    #+#             */
/*   Updated: 2024/11/17 04:21:04 by azghibat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <string.h>
# include <limits.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 8
#endif

typedef struct	s_list
{
	int	fd;
	char			*data;
	struct s_list	*next;
}					t_list;

char	*get_next_line(int fd);
void	reading_inside_buffer(int fd, t_list **buffer, int *read_ptr);
void	*ft_lst_addback(t_list **head, t_list *new);
t_list	*ft_lstnew(char *content);



#endif