
#include <stdio.h>
#include "../libft.h"


int	main(void)
{
	printf("ft_atoi = %d\n", ft_atoi("-1234ab576"));
	printf("atoi = %d\n", atoi("-1234ab576"));

	printf("ft_atoi = %d\n", ft_atoi("0"));
	printf("atoi = %d\n", atoi("0"));

	printf("ft_atoi = %d\n", ft_atoi("678827699277888223"));
	printf("atoi = %d\n", atoi("678827699277888223"));
}
