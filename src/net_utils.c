/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   net_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:55:24 by rlouvrie          #+#    #+#             */
/*   Updated: 2024/09/24 15:09:40 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_malcolm.h"

void	ft_get_interfaces(t_args *args)
{
	if (getifaddrs(&args->iface) < 0)
		return (
			ft_free_all(args),
			ft_error("failed to get interfaces list.", NULL, 0, 1)
		);
}
