/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 15:13:28 by rlouvrie          #+#    #+#             */
/*   Updated: 2024/09/23 12:02:53 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_malcolm.h"

void	ft_free_all(t_args *args)
{
	if (args->tmp)
		ft_free_tab(args->tmp);
}

void	ft_free_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		if (tab[i])
			free(tab[i++]);
	if (tab)
		free(tab);
}
