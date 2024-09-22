/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malcolm.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 22:32:33 by rlouvrie          #+#    #+#             */
/*   Updated: 2024/09/21 15:49:28 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MALCOLM_H
# define FT_MALCOLM_H
# define RED "\x1b[1;31m"
# define YELLOW "\x1b[1;33m"
# define RESET "\x1b[0m"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <signal.h>
# include "../ft/libft.h"

typedef struct s_args
{
	char	*src_ip;
	char	*src_mac;
	char	*dst_ip;
	char	*dst_mac;
	char 	**tmp;
	int		verbose;
	int		error;
}				t_args;

/* main.c */
/* error.c */
void			ft_error(char *msg, char *name, int usage, int exit_code);
void			ft_usage(void);
/* parsing.c */
void			ft_parse_args(int argc, char *argv[], t_args *args);
void			ft_set_args_in_struct(int argc, char *argv[], t_args *args);
/* parsing_ip.c */
int				ft_is_ipv4(char *ip, t_args *args);
int				ft_verify_byte(char *byte);
unsigned int	ft_tablen(char **tab);
/* parsing_mac.c */
int				ft_is_mac(char *mac);
/* signal.c */
void			ft_sigint_handler(int sig);
/* free.c */
void			ft_free_tab(char **tab);
void			ft_free_all(t_args *args);
/* string.c */
long long		ft_atoll(char *str);
#endif
