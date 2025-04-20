

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "../libft.h"

int	main(void)
{
    printf("negative number");
	printf("ft_atoi = %d\n", ft_atoi("-1234ab576"));
	printf("atoi = %d\n", atoi("-1234ab576"));

    printf("zero");
	printf("ft_atoi = %d\n", ft_atoi("0"));
	printf("atoi = %d\n", atoi("0"));

    printf("overflow");
	printf("ft_atoi = %d\n", ft_atoi("2147483650"));
	printf("atoi = %d\n", atoi("2147483650"));

    printf("underflow");
	printf("ft_atoi = %d\n", ft_atoi("-2147483650"));
	printf("atoi = %d\n", atoi("-2147483650"));
}
