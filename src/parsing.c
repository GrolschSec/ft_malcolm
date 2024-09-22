/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 18:57:10 by rlouvrie          #+#    #+#             */
/*   Updated: 2024/09/21 15:29:26 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_malcolm.h"

void	ft_parse_args(int argc, char *argv[], t_args *args)
{
	ft_set_args_in_struct(argc, argv, args);
}

void	ft_set_args_in_struct(int argc, char *argv[], t_args *args)
{
	if (ft_is_ipv4(argv[1], args))
		args->src_ip = argv[1];
	else
		return (ft_free_all(args), ft_error("invalid source ip.", NULL, 1, 1));
	// ft_is_mac(argv[2]);
	// args->src_mac = argv[2];
	if (ft_is_ipv4(argv[3], args))
		args->src_ip = argv[3];
	else
		return (ft_free_all(args), ft_error("invalid dest ip.", NULL, 1, 1));
	// ft_is_mac(argv[4]);
	// args->dst_mac = argv[4];
	if (argc == 6
		&& ft_strlen(argv[5]) == 2
		&& ft_strncmp(argv[5], "-v", 2) == 0)
		args->verbose = 1;
	else if (argc == 6)
		ft_error("invalid option: ", argv[5], 1, 1);
}
