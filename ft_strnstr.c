/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlucca <edlucca@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:26:06 by edlucca           #+#    #+#             */
/*   Updated: 2025/04/15 10:26:19 by edlucca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Locate the needle inside the haystack
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	h = 0;
	n = 0;
	if (needle[0] == 0)
		return ((char *) haystack);
	while (haystack[h] && h < len)
	{
		while (haystack[h + n] == needle[n] && haystack[h + n] && h + n < len)
		{
			n++;
			if (needle[n] == 0)
				return ((char *) haystack + h);
		}
		h++;
		n = 0;
	}
	return (0);
}
