#include "../libft.h"
#include <stdio.h>
// #include <ctype.h>

void	test(const char *s)
{
	if (ft_strlen(s) == (strlen(s)))
	{
		printf("\n%zu\n", ft_strlen(s));
		printf("%lu\n", strlen(s));
		printf("SUCCESS :)\n");
	}
	else
{
		printf("\n%zu\n", ft_strlen(s));
		printf("%lu\n", strlen(s));
		printf("FAILED :(\n\n");
	}
}
int	main()
{
	printf("\n--------Test ft_strlen--------\n");
	test("string");
	test("abacaxi abacashi");
	test("1 coelhinho mata muita gente");
	test("dois coelhinhos \t matam muito mais");
	test("");
}
