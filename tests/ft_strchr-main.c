
#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char	*str = "String";
	char	 c = 114;

	printf("char is: %s\n", ft_strchr(str, c));
	printf("char is: %s\n", strchr(str, c));
}
