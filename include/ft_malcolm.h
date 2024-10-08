/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malcolm.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 22:32:33 by rlouvrie          #+#    #+#             */
/*   Updated: 2024/09/24 15:10:40 by rlouvrie         ###   ########.fr       */
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
# include <sys/types.h>
# include <ifaddrs.h>
# include <arpa/inet.h>
# include <netinet/in.h>
# include "../ft/libft.h"

typedef struct s_args
{
	char			*src_ip;
	unsigned char	src_mac;
	char			*dst_ip;
	unsigned char	dst_mac;
	char			**tmp;
	int				verbose;
	int				error;
	struct ifaddrs	*iface;
	char			*iface_name;
}				t_args;

/* main.c */
/* error.c */
void			ft_error(char *msg, char *name, int usage, int exit_code);
void			ft_usage(void);
/* parsing.c */
void			ft_parse_args(int argc, char *argv[], t_args *args);
/* parsing_ip.c */
int				ft_is_ipv4(char *ip, t_args *args);
int				ft_verify_byte(char *byte);
unsigned int	ft_tablen(char **tab);
/* parsing_mac.c */
int				ft_is_mac(char *mac, t_args *args);
int				ft_verify_mac_byte(char *byte);
int				ft_is_hexa_char(char c);
/* signal.c */
void			ft_sigint_handler(int num);
/* free.c */
void			ft_free_tab(char **tab);
void			ft_free_all(t_args *args);
/* string.c */
long long		ft_atoll(char *str);
/* info.c */
void			ft_info(char *msg);
/*  net_utils.c */
void			ft_get_interfaces(t_args *args);
#endif
