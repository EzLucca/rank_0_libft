/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlucca <edlucca@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:21:52 by edlucca           #+#    #+#             */
/*   Updated: 2025/04/23 19:02:52 by edlucca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Copies n bytes from src to dest. It uses a temporary array between the copy. 
// The memory areas may overlap: copying takes place as though the bytes
// in  src are first copied into a temporary array that does not overlap src or
// dest, and the bytes are then copied from the temporary array to dest.

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*tmp_dst;
	const char	*tmp_src;
	size_t		i;

	if (!dest && !src)
		return (NULL);
	tmp_src = (const char *) src;
	tmp_dst = (char *) dest;
	i = 0;
	if (tmp_dst < tmp_src || tmp_dst >= (tmp_src + n))
	{
		while (i < n)
		{
			tmp_dst[i] = tmp_src[i];
			i++;
		}
	}
	else
	{
		while (n-- > 0)
			tmp_dst[n] = tmp_src[n];
	}
	return (dest);
}
