/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_ip.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 13:17:41 by rlouvrie          #+#    #+#             */
/*   Updated: 2024/09/23 11:37:14 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_malcolm.h"

int	ft_is_ipv4(char *ip, t_args *args)
{
	int	i;

	if (!ip)
		return (0);
	args->tmp = ft_split(ip, '.');
	if (!args->tmp)
		return (0);
	if (ft_tablen(args->tmp) != 4)
		return (0);
	i = 0;
	while (i < 4)
		if (!ft_verify_byte(args->tmp[i++]))
			return (0);
	ft_free_tab(args->tmp);
	args->tmp = NULL;
	return (1);
}

unsigned int	ft_tablen(char **tab)
{
	unsigned int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

int	ft_verify_byte(char *byte)
{
	int			i;
	long long	n;

	i = 0;
	if (!byte)
		return (0);
	while (byte[i])
	{
		if (!ft_isdigit(byte[i]))
			return (0);
		i++;
	}
	n = ft_atoll(byte);
	if (n < 0 || n > 255)
		return (0);
	return (1);
}
