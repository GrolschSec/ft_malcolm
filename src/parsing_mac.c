/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_mac.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 13:17:58 by rlouvrie          #+#    #+#             */
/*   Updated: 2024/09/24 15:10:02 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_malcolm.h"

int	ft_is_mac(char *mac, t_args *args)
{
	int	i;

	args->tmp = ft_split(mac, ':');
	if (!args->tmp)
		return (0);
	if (ft_tablen(args->tmp) != 6)
		return (0);
	i = 0;
	while (i < 6)
		if (!ft_verify_mac_byte(args->tmp[i++]))
			return (0);
	return (1);
}

int	ft_verify_mac_byte(char *byte)
{
	int	i;

	i = -1;
	if (ft_strlen(byte) != 2)
		return (0);
	while (byte[++i])
		if (!ft_is_hexa_char(byte[i]))
			return (0);
	return (1);
}

int	ft_is_hexa_char(char c)
{
	if (c > 47 && c < 58)
		return (1);
	if (c > 64 && c < 71)
		return (1);
	if (c > 96 && c < 103)
		return (1);
	return (0);
}
