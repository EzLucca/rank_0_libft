#include "../libft.h"
#include <stdio.h>
#include <ctype.h>

int	main()
{
	printf("ft_strlen: %zu | strlen: %lu\n", ft_strlen("string"), strlen("string"));
	printf("ft_strlen: %zu | strlen: %lu\n", ft_strlen(""), strlen(""));
	printf("ft_strlen: %zu | strlen: %lu\n", ft_strlen("4"), strlen("4"));
}
