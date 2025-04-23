/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlucca <edlucca@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 17:10:10 by edlucca           #+#    #+#             */
/*   Updated: 2025/04/23 19:04:57 by edlucca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocates memory (using malloc(3)) and returns a substring from the string ’s’.
// The substring starts at index ’start’ and has a maximum length of ’len’.
// On success, the strdup() function returns a pointer to the duplicated string.
// It returns NULL if insufficient memory was available,
// with errno set to indicate the cause of the error.

char	*ft_strdup(const char *s)
{
	char	*newstr;
	int		i;

	i = 0;
	newstr = (char *) malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (newstr)
	{
		while (s[i])
		{
			newstr[i] = s[i];
			i++;
		}
		newstr[i] = '\0';
	}
	return (newstr);
}
