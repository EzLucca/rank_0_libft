/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlucca <edlucca@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:26:35 by edlucca           #+#    #+#             */
/*   Updated: 2025/04/15 10:26:41 by edlucca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*newstr;
	int		i;

	i = 0;
	newstr = (char *) malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (newstr)
	{
		while (src[i])
		{
			newstr[i] = src[i];
			i++;
		}
		newstr[i] = '\0';
	}
	return (newstr);
}
