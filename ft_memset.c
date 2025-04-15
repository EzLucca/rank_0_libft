/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlucca <edlucca@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:20:43 by edlucca           #+#    #+#             */
/*   Updated: 2025/04/15 10:21:06 by edlucca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*temp_ptr;

	temp_ptr = (unsigned char *) b;
	while (len > 0)
	{
		(*temp_ptr++) = (unsigned char) c;
		len--;
	}
	return (b);
}
