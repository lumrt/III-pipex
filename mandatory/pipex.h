/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 17:36:51 by lucas             #+#    #+#             */
/*   Updated: 2024/05/02 21:09:11 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>
/*stdio for debug df to delet*/
# include <sys/wait.h>
# include <fcntl.h>
# include "libft/libft.h"

# define READ_END	0
# define WRITE_END	1

/* Mandatory functions */
int		get_next_line(char **line);
void	execute(char *argv, char **envp);
void	syntax_error(void);
void	error(void);
char	*find_path(char *command, char **envp);
int		openfd_rights(char *argv, int param);
int		ft_strcmp(char *s1, char *s2);
char	*ft_free_array(char **ar);
void	type_error(char *s);
int		is_slash(const char *haystack);
void	close_all(int *fd);
void	exec_child(char **argv, char **envp, int *fd);
void	exec_child2(char **argv, char **envp, int *fd);
void	child_process2(char **argv, char **envp, int *p);
void	child_process(char **argv, char **envp, int *p);
void	env_error(void);

#endif