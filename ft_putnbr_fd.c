/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlucca <edlucca@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:28:20 by edlucca           #+#    #+#             */
/*   Updated: 2025/04/23 19:06:10 by edlucca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Outputs the integer ’n’ to the specified file descriptor.

void	ft_putnbr_fd(int n, int fd)
{
	int	value;

	value = 0;
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n = -n;
		}
		if (n >= 10)
			ft_putnbr_fd(n / 10, fd);
		value = n % 10 + 48;
		write(fd, &value, 1);
	}
}
// void	ft_putnbr_fd(int n, int fd)
// {
// 	long	tmp;
//
// 	tmp = (long)n;
// 	if (tmp < 0)
// 	{
// 		ft_putchar_fd('-', fd);
// 		tmp = -tmp;
// 	}
// 	if (tmp > 9)
// 		ft_putnbr_fd(tmp / 10, fd);
// 	ft_putchar_fd((tmp % 10) + '0', fd);
// }
