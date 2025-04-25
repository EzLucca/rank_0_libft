/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlucca <edlucca@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:20:43 by edlucca           #+#    #+#             */
/*   Updated: 2025/04/23 19:02:39 by edlucca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

// Fill the n bytes of the memory area pointed by s with the constant type c
// The memset() function returns a pointer to the memory area s.

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*temp_ptr;

	temp_ptr = (unsigned char *) s;
	while (n > 0)
	{
		(*temp_ptr++) = (unsigned char) c;
		n--;
	}
	return (s);
}
