/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlucca <edlucca@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:15:00 by edlucca           #+#    #+#             */
/*   Updated: 2025/04/26 21:48:39 by edlucca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Transform a string into an int
// Behaviour is the same as strtol() but atoi don't detect errors.
//
// Return:
// The converted value or 0 on error.

int	ft_atoi(const char *nptr)
{
    long	number;
    int		signal;

    number = 0;
    signal = 1;
    while ((*nptr >= '\t' && *nptr <= '\r') || (*nptr == ' '))
        nptr++;
    if (*nptr == '+' || *nptr == '-')
    {
        if (*nptr == '-')
            signal = -1;
        nptr++;
    }
    while (*nptr >= '0' && *nptr <= '9')
    {
        number = number * 10 + (*nptr - '0');
        if (number < 0 && signal == 1)
        	return (-1);
        else if (number < 0 && signal == -1)
        	return (0);
        nptr++;
    }
    return ((int)(number * signal));
}
