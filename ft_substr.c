/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlucca <edlucca@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:26:47 by edlucca           #+#    #+#             */
/*   Updated: 2025/04/15 10:26:50 by edlucca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*string;

	i = 0;
	if (!*s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	string = ft_calloc(len + 1, sizeof(char));
	if (!string)
		return (NULL);
	while (i < len)
	{
		string[i] = s[start + i];
		i++;
	}
	return (string);
}
