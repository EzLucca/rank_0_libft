#include <stdio.h>
#include "../libft.h"

void	test(char *s)
{
	char *a = ft_strdup(s);
	char *b = strdup(s);

	if (strcmp(a, b) == 0)
	{
		printf("%s\n", a);
		printf("%s\n", b);
		printf("success\n");
	}
	else
	{
		printf("%s\n", a);
		printf("%s\n", b);
		printf("FAILED :(\n");
	}
}

int main(void)
{
	
	test("string");
	// char *string = "This is a string";
	//
	// printf("ft_strdup: %s\n", ft_strdup(string));
	// printf("strdup: %s\n", strdup(string));
	return(0);	
}
