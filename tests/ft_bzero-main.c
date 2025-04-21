
#include "../libft.h"
#include <stdio.h>
// #include <ctype.h>
// #include <string.h>

void test(int test_num, const char *input, size_t n)
{
    char s1[100];
    char s2[100];

    // Create a copy of the input string for comparison
    strcpy(s1, input);
    strcpy(s2, input);

    // Apply ft_bzero and bzero
    ft_bzero(s1, n);
    bzero(s2, n);

    // Compare the results
    printf("Test %d\n", test_num);
    printf("Input: \"%s\"\n", input);
    printf("ft_bzero: \"%s\"\n", s1);
    printf("bzero: \"%s\"\n", s2);

    if (memcmp(s1, s2, 100) == 0)
        printf("SUCCESS :)\n\n");
    else
    {
        printf("FAILED :(\n");
        printf("Expected: \"%s\"\n", s2);
        printf("Got: \"%s\"\n\n", s1);
    }
}

int	main()
{
	printf("\n--------Test ft_bzero--------\n");
	test(1, "", 15);
	test(2, "abacaxi abacashi", 7);
	test(3, "1 coelhinho mata muita gente", 5);
	test(4, "dois coelhinhos \t matam muito mais", 2);
	test(5, "string", 2);
	return (0);
}
