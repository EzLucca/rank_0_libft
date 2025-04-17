/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlucca <edlucca@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:18:59 by edlucca           #+#    #+#             */
/*   Updated: 2025/04/15 10:19:01 by edlucca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
	{
		return (c);
	}
	return (0);
}

// #include "libft.h"
//
// int	ft_isalnum(int c)
// {
// 	return (ft_isalpha(c) || ft_isdigit(c));
// }
//
// // #include "libft.h"
// #include <stdio.h>
// #include <ctype.h>
//
// int	main()
// {
// 	printf("ft_isalnum: %d | isalnum: %d\n", ft_isalnum('5'), isalnum('5'));
// 	printf("ft_isalnum: %d | isalnum: %d\n", ft_isalnum(';'), isalnum(';'));
// 	printf("ft_isalnum: %d | isalnum: %d\n", ft_isalnum('0'), isalnum('0'));
// }
