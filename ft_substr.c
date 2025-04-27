/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlucca <edlucca@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:26:47 by edlucca           #+#    #+#             */
/*   Updated: 2025/04/26 22:18:50 by edlucca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocates with malloc(3)) and returns a substring from the string ’s’. 
// The substring starts at index ’start’ and has a maximum length of ’len’.
//
// s: The string from which to create the substring.
// start: The start index of the substring in the string 's'.
// len: The maximum length of the substring.
//
// If "len" is longer than the number of characters available after "start",
// you adjust it. This ensures you don’t read past the end of the string.

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*string;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	string = ft_calloc(len + 1, sizeof(char));
	if (!string)
		return (NULL);
	ft_memcpy(string, s + start, len);
	return (string);
}
