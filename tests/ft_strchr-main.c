
#include "../libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*str = NULL; 
	char	 c = 'a';

	printf("char is: %s\n", ft_strchr(str, c));
	printf("char is: %s\n", strchr(str, c));
}
