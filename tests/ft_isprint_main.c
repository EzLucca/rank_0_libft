#include "../libft.h"
#include <stdio.h>
#include <ctype.h>

int	main()
{
	printf("ft_isprint: %d | isprint: %d\n", ft_isprint('5'), isprint('5'));
	printf("ft_isprint: %d | isprint: %d\n", ft_isprint(214), isprint(214));
	printf("ft_isprint: %d | isprint: %d\n", ft_isprint('0'), isprint('0'));
}
