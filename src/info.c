/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:25:41 by rlouvrie          #+#    #+#             */
/*   Updated: 2024/09/23 11:28:08 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_malcolm.h"

void	ft_info(char *msg)
{
	ft_putstr_fd("(ft_malcolm) - info: ", 1);
	if (msg)
		ft_putstr_fd(msg, 1);
	ft_putstr_fd("\n", 1);
}
