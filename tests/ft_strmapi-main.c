
#include <stdio.h>
#include "../libft.h"

void	test(int test_nb, char *s1, char s2)
{
	int i = 0;
	char a = ft_strmapi(s1, s2);

	printf("Test %d\n", test_nb);
	while(a[i])
	{
		printf("String: %s\n", a[i]);
		i++;
	}
}

int main(void)
{

	printf("\n--------ft_substr--------\n");
	test(1, "This is a good string ", ' ');
	test(2, "The;thin;line  !", ';');
	test(3, "", 'b');
	test(4, "$   between love and hate      ", ' ');
	test(5, "     This", ' ');
	return(0);	
}
