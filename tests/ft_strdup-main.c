#include <stdio.h>
#include "../libft.h"

void	test(const char *s)
{
	if (ft_strdup(s) == (strdup(s)))
	{
		printf("success\n");
	}
	else
	{
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
