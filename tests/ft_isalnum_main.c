
#include "../libft.h"
#include <stdio.h>
#include <ctype.h>

int	main()
{
	printf("ft_isalnum: %d | isalnum: %d\n", ft_isalnum('5'), isalnum('5'));
	printf("ft_isalnum: %d | isalnum: %d\n", ft_isalnum(';'), isalnum(';'));
	printf("ft_isalnum: %d | isalnum: %d\n", ft_isalnum('0'), isalnum('0'));
}
