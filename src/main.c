/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 22:32:20 by rlouvrie          #+#    #+#             */
/*   Updated: 2024/09/20 17:38:23 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/ft_malcolm.h"

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
        - Hostname resolution
*/

int		main(int argc, char **argv)
{
    if (argc != 5)
    return (0);
}
