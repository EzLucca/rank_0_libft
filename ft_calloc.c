/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlucca <edlucca@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:18:51 by edlucca           #+#    #+#             */
/*   Updated: 2025/04/15 10:18:54 by edlucca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tmp;
	size_t	nb_bytes;

	nb_bytes = nmemb * size;
	if (size && ((nb_bytes / size) != nmemb))
		return (NULL);
	tmp = malloc(nb_bytes);
	if (!tmp)
		return (NULL);
	ft_bzero(tmp, nb_bytes);
	return (tmp);
}
