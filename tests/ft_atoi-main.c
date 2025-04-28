

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include "../libft.h"

// int	main(void)
// {
// 	printf("negative number\n");
// 	printf("ft_atoi = %d\t", ft_atoi("-1234ab576"));
// 	printf("atoi = %d\n\n", atoi("-1234ab576"));
//
// 	printf("zero\n");
// 	printf("ft_atoi = %d\t", ft_atoi("0"));
// 	printf("atoi = %d\n\n", atoi("0"));
//
// 	printf("INT_MIN\n");
// 	printf("ft_atoi = %d\t", ft_atoi("-2147483648"));
// 	printf("atoi = %d\n\n", atoi("-2147483648"));
//
// 	printf("INT_MAX\n");
// 	printf("ft_atoi = %d\t", ft_atoi("2147483649"));
// 	printf("atoi = %d\n\n", atoi("2147483649"));
//
// 	printf("LLONG_MAX\n");
// 	printf("ft_atoi = %d\t", ft_atoi("9223372036854775807"));
// 	printf("atoi = %d\n\n", atoi("9223372036854775807"));
//
// 	printf("LLONG_MIN\n");
// 	printf("ft_atoi = %d\t", ft_atoi("-9223372036854775808"));
// 	printf("atoi = %d\n\n", atoi("-9223372036854775808"));
//
//     printf("ABOVE LLONG_MAX\n");
// 	printf("ft_atoi = %d\t", ft_atoi("9223372036854775818"));
// 	printf("atoi = %d\n\n", atoi("9223372036854775818"));
// }

 int main(void)
{
    char *s = "9223372036854775818111111111111111111111111111111";
    char *str;

    int i = 2;
    while (i < 40)
    {
        str = malloc(i + 1);
        memcpy(str, s, i);
        str[i] = 0;
        printf("str: %s\n", str);
        printf("atoi: %i\n", atoi(str));
        printf("ft_atoi: %i\n\n", ft_atoi(str));
        free(str);
        i++;
    }
}
