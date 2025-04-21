
#include <stdio.h>
#include "../libft.h"

void	test(int test_nb, char *s1, char *s2)
{
	char *a = ft_strjoin(s1, s2);

	printf("Test %d\n", test_nb);
	printf("String: %s\n", a);
}

int main(void)
{

	printf("\n--------ft_substr--------\n");
	test(1, "This is a good string ", "or bad");
	test(2, "The thin line ", "between love and hate");
	test(3, "", "between love and hate");
	test(4, "between love and hate", "");
	test(5, "", "");
	return(0);	
}
