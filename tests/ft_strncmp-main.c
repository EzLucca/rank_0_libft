
#include "../libft.h"
#include <stdio.h>

int	main()
{
	char	*s1 = "Spring is coming ras";
	char	*s2 = "Sprini";
	unsigned int	n = 4;

	printf("int is: %d\n", ft_strncmp(s1, s2, n));
}
