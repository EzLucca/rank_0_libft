#include "../libft.h"
#include <stdio.h>
#include <ctype.h>

void	test(int s)
{
	if (ft_isascii(s) == (isascii(s)))
	{
		printf("%d\n", ft_isascii(s));
		printf("%d\n", isascii(s));
		printf("FAILED :(\n");
	}
	else
	{
		printf("%d\n", ft_isascii(s));
		printf("%d\n", isascii(s));
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
	test(200); //Ÿ
}
