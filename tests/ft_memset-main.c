
#include "../libft.h"
#include <stdio.h>
// #include <ctype.h>
// #include <string.h>

void test(int nb, char *s, int c, size_t n)
{
	char s1[100];
	char s2[100];

	strcpy(s1, s);
	strcpy(s2, s);

	ft_memset(s1, c, n);
	memset(s2, c, n);

	printf("Test %d\n", nb);
	printf("ft_memset: \"%s\"\n", s1);
	printf("memset   : \"%s\"\n", s2);

	if (memcmp(s1, s2, strlen(s)) == 0)
		printf("SUCCESS :)\n");
	else
	{
		printf("FAILED :(\n");
		printf("Expected: %s\n", s2);
		printf("Got     : %s\n", s1);
	}
}

int	main()
{
	printf("\n--------Test ft_memset--------\n");
	test(1, "", '%', 15);
	test(2, "abacaxi abacashi", '&', 7);
	test(3, "1 coelhinho mata muita gente", '@', 5);
	test(4, "dois coelhinhos \t matam muito mais", '!', 2);
	test(5, "string", '3', 2);
}
