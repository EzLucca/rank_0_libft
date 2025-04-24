/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlucca <edlucca@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:22:45 by edlucca           #+#    #+#             */
/*   Updated: 2025/04/23 19:03:09 by edlucca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The  strchr()  function  returns a pointer to the first occurrence of the
// character c in the string s.
// if c is specified as '\0', the functions return a pointer to the terminator.

char	*ft_strchr(const char *s, int c)
{
	int	i;

	c = (unsigned char) c;
	i = 0;
	while (s[i] || c == '\0')
	{
		if (s[i] == c)
			return ((char *) &s[i]);
		i++;
	}
	return (NULL);
}
