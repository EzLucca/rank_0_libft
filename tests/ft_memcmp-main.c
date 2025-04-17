
#include "../libft.h"
#include <stdio.h>

int	main()
{
	char	*s1 = "Spring is coming ras";
	char	*s2 = "SprIng is coming ras";
	size_t	n = 5;

	printf("char is: %d\n", ft_memcmp(s1, s2, n));
}
