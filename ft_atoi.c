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
int	ft_atoi(char *str)
{
	long int	number;
	int			signal;

	number = 0;
	signal = 1;
	while ((*str >= 9 && *str <= 13) || (*str == 32))
		++str;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			signal = -1;
		++str;
	}
	while (*str >= 48 && *str <= 57)
	{
		number = number * 10 + (*str - 48);
		++str;
		if (number < 0 && signal == 1)
			return (-1);
		else if (number < 0 && signal == -1)
			return (0);
	}
	return ((int)(number * signal));
}
