/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlucca <edlucca@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:26:59 by edlucca           #+#    #+#             */
/*   Updated: 2025/04/23 19:05:24 by edlucca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocates memory (using malloc(3)) and returns a new string, 
// which is the result of concatenating ’s1’ and ’s2’.

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*array;

	i = 0;
	j = 0;
	array = ft_calloc((ft_strlen(s1) + ft_strlen(s2) + 1), sizeof(char));
	if (!array)
		return (NULL);
	while (s1[i])
		array[j++] = s1[i++];
	i = 0;
	while (s2[i])
		array[j++] = s2[i++];
	return (array);
}
