/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 22:32:20 by rlouvrie          #+#    #+#             */
/*   Updated: 2024/09/21 17:26:17 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_malcolm.h"

/*
    - Parsing for IPv4 Address
    - Parsing for MAC Address
    - Four arguments:
        - source ip
        - source mac
        - destination ip
        - destination mac
    - Error handling: 
        - Invalid IP or Unknown host
        - Invalid MAC
        - Invalid number of arguments
    - Signal handling:
        - SIGINT (Clean up and exit)
    - Program flow:
        - Detect
        - Reply
        - Exit
    - Logging:
        - Found available interface
        - An ARP request has been broadcast:
            - mac of the request:
            - ip of the request:
        - Sending ARP reply
        - Sent ARP reply, you may now check the target's arp table.
    - Bonus:
        - Verbose mode: show the packets.
*/

/*
	// Check number of arguments
	// Signal handling
	// Parse arguments
	// Optionnal: Validity of arguments
	// Main program flow
*/
int	main(int argc, char *argv[])
{
	t_args				args;

	(void)argv;
	// Make a reusable sigaction function to pass a struct
	signal(SIGINT, ft_sigint_handler);
	ft_bzero(&args, sizeof(t_args));
	if (argc < 5 || argc > 6)
		return (ft_error("invalid number of arguments.", NULL, 1, 0), 1);
	ft_parse_args(argc, argv, &args);
	return (0);
}
