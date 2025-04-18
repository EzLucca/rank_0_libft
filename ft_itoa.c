/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edlucca <edlucca@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:19:44 by edlucca           #+#    #+#             */
/*   Updated: 2025/04/15 10:19:47 by edlucca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
// static int	int_len(long nbr);
//count the number of digits
static	int	int_len(long nbr)
{
    int	count;

    count = 0;
    if (nbr <= 0)
        count++;
    while (nbr != 0)
    {
        nbr /= 10;
        count++;
    }
    return (count);
}

char	*ft_itoa(int n)
{
    int		len;
    char	*result;
    long	nbr;

    nbr = n;
    len = int_len(nbr);
    result = malloc((len + 1) * sizeof(char));
    if (!result)
        return (NULL);
    result[len] = '\0';
    if (nbr == 0)
        result[0] = '0';
    if (nbr < 0)
    {
        nbr = -nbr;
        result[0] = '-';
    }
    while (nbr != 0)
    {
        result[--len] = ((nbr % 10) + 48);
        nbr = nbr / 10;
    }
    return (result);
}

void	test_itoa(void)
{
    printf("\n\n=========== TESTING ITOA ============\n\n");

    int	n;

    n = 0;
    if (!strcmp("0", ft_itoa(n)))
        printf("OK: expected \"%d\", got \"%s\".\n", n, ft_itoa(n));
    else
        printf("Try again: expected \"%d\", got \"%s\".\n", n, ft_itoa(n));

    n = 123456789;
    if (!strcmp("123456789", ft_itoa(n)))
        printf("OK: expected \"%d\", got \"%s\".\n", n, ft_itoa(n));
    else
        printf("Try again: expected \"%d\", got \"%s\".\n", n, ft_itoa(n));

    n = -42;
    if (!strcmp("-42", ft_itoa(n)))
        printf("OK: expected \"%d\", got \"%s\".\n", n, ft_itoa(n));
    else
        printf("Try again: expected \"%d\", got \"%s\".\n", n, ft_itoa(n));

    n = -2147483648;
    if (!strcmp("-2147483648", ft_itoa(n)))
        printf("OK: expected \"%d\", got \"%s\".\n", n, ft_itoa(n));
    else
        printf("Try again: expected \"%d\", got \"%s\".\n", n, ft_itoa(n));
}

int main ()
{
    test_itoa();
    return (0);
}
