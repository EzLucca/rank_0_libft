/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlucca <edlucca@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:15:00 by edlucca           #+#    #+#             */
/*   Updated: 2025/04/15 10:15:07 by edlucca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// protect
int	ft_atoi(const char *nptr)
{
	long int	number;
	int			signal;

	number = 0;
	signal = 1;
	while ((*nptr >= 9 && *nptr <= 13) || (*nptr == 32))
		++nptr;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			signal = -1;
		++nptr;
	}
	while (*nptr >= 48 && *nptr <= 57)
	{
		number = number * 10 + (*nptr - 48);
		++nptr;
		if (number < 0 && signal == 1)
			return (-1);
		else if (number < 0 && signal == -1)
			return (0);
	}
	return ((int)(number * signal));
}
