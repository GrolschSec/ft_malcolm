/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signal.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 12:45:30 by rlouvrie          #+#    #+#             */
/*   Updated: 2024/09/23 11:30:14 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_malcolm.h"

extern t_args	g_args;

void	ft_sigint_handler(int num)
{
	if (num == SIGINT)
	{
		ft_info("signal SIGINT received, cleaning up and exiting.");
		ft_free_all(&g_args);
	}
}
