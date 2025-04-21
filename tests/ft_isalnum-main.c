
#include "../libft.h"
#include <stdio.h>

void	test(int s)
{
	if (ft_isalnum(s) == (isalnum(s)))
	{
		printf("%d\n", ft_isalnum(s));
		printf("%d\n", isalnum(s));
		printf("FAILED :(\n");
	}
	else
	{
		printf("%d\n", ft_isalnum(s));
		printf("%d\n", isalnum(s));
		printf("success\n");
	}
}
int	main()
{
	test('s');
	test('a');
	test('1');
	test('\t');
	test('0');
}
