#include "../libft.h"
#include <stdio.h>
#include <ctype.h>

int	main()
{
	printf("ft_isascii: %d | isascii: %d\n", ft_isascii('5'), isascii('5'));
	printf("ft_isascii: %d | isascii: %d\n", ft_isascii(214), isascii(214));
	printf("ft_isascii: %d | isascii: %d\n", ft_isascii('0'), isascii('0'));
}
