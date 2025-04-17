
#include "../libft.h"
#include <stdio.h>
#include <bsd/string.h>

int	main()
{
	char *haystack = "This is the Haystack";
	char *needle= "is";
	size_t	len = 9;

	printf("ft_strnstr: %s\n", ft_strnstr(haystack, needle, len));
	printf("strnstr: %s\n", strnstr(haystack, needle, len));
}
