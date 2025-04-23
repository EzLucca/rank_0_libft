/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlucca <edlucca@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:23:06 by edlucca           #+#    #+#             */
/*   Updated: 2025/04/23 19:03:19 by edlucca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Scan n bytes for c in the memory area pointed by s
//
// The  memchr()  function  scans  the  initial  n  bytes of the memory area
// pointed to by s for the first instance of c.  Both c and the bytes of the
// memory area pointed to by s are interpreted as unsigned char.

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*string;
	unsigned char	instance_c;
	size_t			i;

	string = (unsigned char *)s;
	instance_c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (string[i] == instance_c)
			return ((void *)&string[i]);
		i++;
	}
	return (NULL);
}
