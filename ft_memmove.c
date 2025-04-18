/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlucca <edlucca@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:21:52 by edlucca           #+#    #+#             */
/*   Updated: 2025/04/15 10:21:55 by edlucca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Copies n bytes from src to dst. It uses a temporary array between the copy. 
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmp_dst;
	char	*tmp_src;
	size_t	i;

	tmp_src = (char *) src;
	tmp_dst = (char *) dst;
	i = 0;
	if (tmp_dst < tmp_src || tmp_dst >= (tmp_src + len))
	{
		while (i < len)
		{
			tmp_dst[i] = tmp_src[i];
			i++;
		}
	}
	else
	{
		while (len-- > 0)
			tmp_dst[len] = tmp_src[len];
	}
	return (dst);
}
