/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlucca <edlucca@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:27:20 by edlucca           #+#    #+#             */
/*   Updated: 2025/04/15 10:27:21 by edlucca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	is_sep(char c, char *sep)
{
	while (*sep != '\0')
	{
		if (*sep == c)
			return (1);
		sep++;
	}
	return (0);
}

static char	*fill_array(char *s, char *c)
{
	int		len;
	int		i;
	char	*dest;

	len = 0;
	while (s[len] != '\0' && !is_sep(s[len], c))
		len++;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	while (i < len)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static int	count_words(char *s, char *c)
{
	int	count;

	count = 0;
	while (*s != '\0')
	{
		if (!is_sep(*s, c))
		{
			count++;
			while (*s != '\0' && !is_sep(*s, c))
				s++;
		}
		else
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		num;
	char	**result;

	num = count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (num + 1));
	if (!result)
		return (0);
	i = 0;
	while (*s != '\0')
	{
		if (!is_sep(*s, c))
		{
			result[i++] = fill_array(s, c);
			while (*s != '\0' && !is_sep(*s, c))
				s++;
		}
		else
			s++;
	}
	result[i] = NULL;
	return (result);
}
