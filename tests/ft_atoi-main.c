

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "../libft.h"

int	main(void)
{
	printf("negative number\n");
	printf("ft_atoi = %d\t", ft_atoi("-1234ab576"));
	printf("atoi = %d\n\n", atoi("-1234ab576"));

	printf("zero\n");
	printf("ft_atoi = %d\t", ft_atoi("0"));
	printf("atoi = %d\n\n", atoi("0"));

	printf("INT_MIN\n");
	printf("ft_atoi = %d\t", ft_atoi("-2147483648"));
	printf("atoi = %d\n\n", atoi("-2147483648"));

	printf("INT_MAX\n");
	printf("ft_atoi = %d\t", ft_atoi("2147483647"));
	printf("atoi = %d\n\n", atoi("2147483647"));
	
	printf("LLONG_MAX\n");
	printf("ft_atoi = %d\t", ft_atoi("9223372036854775807"));
	printf("atoi = %d\n\n", atoi("9223372036854775807"));

	printf("LLONG_MIN\n");
	printf("ft_atoi = %d\t", ft_atoi("-9223372036854775808"));
	printf("atoi = %d\n\n", atoi("-9223372036854775808"));

    printf("ABOVE LLONG_MAX\n");
	printf("ft_atoi = %d\t", ft_atoi("9223372036854775818"));
	printf("atoi = %d\n\n", atoi("9223372036854775818"));
}
