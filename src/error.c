/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 18:21:01 by rlouvrie          #+#    #+#             */
/*   Updated: 2024/09/21 13:06:59 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_malcolm.h"

void	ft_usage(void)
{
	ft_putstr_fd("Usage: ./ft_malcolm ", 1);
	ft_putstr_fd("[src_ip] [src_mac] [dst_ip] [dst_mac] ", 1);
	ft_putstr_fd("(Optionnal: -v: verbose mode)\n", 1);
	ft_putstr_fd("This tool has been made for ", 1);
	ft_putstr_fd(YELLOW "educational purposes only.\n\n" RESET, 1);
}

void	ft_error(char *msg, char *name, int usage, int exit_code)
{
	if (usage)
		ft_usage();
	ft_putstr_fd(RED "(ft_malcolm) - error: ", 2);
	if (msg)
		ft_putstr_fd(msg, 2);
	if (name)
		ft_putstr_fd(name, 2);
	ft_putstr_fd(RESET "\n", 2);
	if (exit_code)
		exit(exit_code);
}
