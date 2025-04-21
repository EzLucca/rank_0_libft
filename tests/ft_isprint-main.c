#include "../libft.h"
#include <stdio.h>
#include <ctype.h>

void	test(int s)
{
	if (ft_isprint(s) == (isprint(s)))
	{
		printf("\n%d\n", ft_isprint(s));
		printf("%d\n", isprint(s));
		printf("FAILED :(\n\n");
	}
	else
{
		printf("\n%d\n", ft_isprint(s));
		printf("%d\n", isprint(s));
		printf("SUCCESS :)\n");
	}
}
int	main()
{
	printf("\n--------Test ft_isprint--------\n");
	test('s');
	test('a');
	test('1');
	test('\t');
	test('0');
	test(200); //Ÿ
}
