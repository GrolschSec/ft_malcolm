/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signal.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 12:45:30 by rlouvrie          #+#    #+#             */
/*   Updated: 2024/09/21 15:59:28 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_malcolm.h"

static t_args	*args_ptr;

void	ft_sigint_handler(int sig)
{
    printf("Cleaning up and exiting...\n", sig);
    ft_free_all(args_ptr);
    exit(0);
}

void set_args_ptr(t_args *args)
{
    args_ptr = args;
}
