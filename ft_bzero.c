/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlucca <edlucca@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:18:31 by edlucca           #+#    #+#             */
/*   Updated: 2025/04/15 10:21:23 by edlucca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*temp_ptr;

	temp_ptr = (char *) s;
	while (n > 0)
	{
		*(temp_ptr++) = 0;
		n--;
	}
}
