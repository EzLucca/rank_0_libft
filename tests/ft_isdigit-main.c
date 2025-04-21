
#include "../libft.h"
#include <stdio.h>

void	test(int s)
{
	if (ft_isdigit(s) == (isdigit(s)))
	{
		printf("%d\n", ft_isdigit(s));
		printf("%d\n", isdigit(s));
		printf("success\n");
	}
	else
	{
		printf("%d\n", ft_isdigit(s));
		printf("%d\n", isdigit(s));
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
