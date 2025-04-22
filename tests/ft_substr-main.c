
#include <stdio.h>
#include "../libft.h"

void	test(int test_nb, char *s, int start, size_t len)
{
	char *a = ft_substr(s, start, len);

	printf("Test %d\n", test_nb);
	printf("String: %s\n", s);
	printf("Substr: %s\n", a);
	// free(a);
}

int main(void)
{

	printf("\n--------ft_substr--------\n");
	test(1, "This is a good string", 4, 8);
	test(2, "This is a good string", 10, 4);
	return(0);	
}
