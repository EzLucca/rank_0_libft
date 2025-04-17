
#include <stdio.h>
#include <limits.h>
#include "../libft.h"

int	main(void)
{
	printf("ft_atoi = %d\n", ft_atoi("-1234ab576"));
	printf("atoi = %d\n", atoi("-1234ab576"));

	printf("ft_atoi = %d\n", ft_atoi("0"));
	printf("atoi = %d\n", atoi("0"));

	printf("ft_atoi = %d\n", ft_atoi("2147483650"));
	printf("atoi = %d\n", atoi("2147483650"));

	// printf("ft_atoi = %d\n", ft_atoi(INT_MAX));
	// printf("atoi = %d\n", atoi(INT_MAX));
}
