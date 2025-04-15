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

int	ft_atoi(char *str)
{
	int	number;
	int	signal;

	number = 0;
	signal = 0;
	while ((*str >= 9 && *str <= 13) || (*str == 32))
		++str;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			signal++;
		++str;
	}
	while (*str >= 48 && *str <= 57)
	{
		number *= 10;
		number += (*str - 48);
		++str;
	}
	if ((signal % 2) == 0)
		return (number);
	return (-number);
}
