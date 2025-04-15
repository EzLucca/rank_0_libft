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

static char	*fill_array(char *str, char *charset)
{
	int		len;
	int		i;
	char	*dest;

	len = 0;
	while (str[len] != '\0' && !is_sep(str[len], charset))
		len++;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	while (i < len)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static int	count_words(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		if (!is_sep(*str, charset))
		{
			count++;
			while (*str != '\0' && !is_sep(*str, charset))
				str++;
		}
		else
			str++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		num;
	char	**result;

	num = count_words(str, charset);
	result = (char **)malloc(sizeof(char *) * (num + 1));
	if (!result)
		return (0);
	i = 0;
	while (*str != '\0')
	{
		if (!is_sep(*str, charset))
		{
			result[i++] = fill_array(str, charset);
			while (*str != '\0' && !is_sep(*str, charset))
				str++;
		}
		else
			str++;
	}
	result[i] = NULL;
	return (result);
}
