
#include "../libft.h"
#include <stdio.h>

void	test(int s)
{
	if (ft_isalpha(s) == (isalpha(s)))
	{
		printf("%d\n", ft_isalpha(s));
		printf("%d\n", isalpha(s));
		printf("success\n");
	}
	else
	{
		printf("%d\n", ft_isalpha(s));
		printf("%d\n", isalpha(s));
		printf("FAILED :(\n");
	}
}
int	main()
{
	test('s');
	test('a');
	test('1');
	test('0');
}
