
#include "../libft.h"
#include <stdio.h>

int	main()
{
	char	*s = "Spring is coming ras";
	char	 c = 83;
	size_t	n = 5;

	printf("char is: %p\n", ft_memchr(s, c, n));
}
