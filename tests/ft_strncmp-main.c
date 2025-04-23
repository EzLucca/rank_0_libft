
#include "../libft.h"
#include <stdio.h>

int	main()
{
	char	*s1 = "Spring is coming ras";
	char	*s2 = "Sprini";
	unsigned int	n = 9;

	printf("ft_strncmp: %d\n", ft_strncmp(s1, s2, n));
	printf("strncmp: %d\n", strncmp(s1, s2, n));
}
