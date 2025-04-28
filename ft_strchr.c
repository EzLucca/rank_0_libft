/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlucca <edlucca@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:22:45 by edlucca           #+#    #+#             */
/*   Updated: 2025/04/25 17:25:22 by edlucca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The  strchr()  function  returns a pointer to the first occurrence of the
// character c in the string s.
// if c is specified as '\0', the functions return a pointer to the terminator.

char	*ft_strchr(const char *s, int c)
{
    if(!s)
        return (NULL);
    c = (unsigned char) c;
    while (*s)
    {
        if (*s == c)
            return ((char *)s);
        s++;
    }
    if (*s == c)
        return ((char *)s);
    return (NULL);
}
