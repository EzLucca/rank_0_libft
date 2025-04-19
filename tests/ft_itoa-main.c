#include <stdio.h>
#include "../libft.h"

void	test_itoa(void)
{
    printf("\n\n=========== TESTING ITOA ============\n\n");

    int	n;

    n = 0;
    if (!strcmp("0", ft_itoa(n)))
        printf("OK: expected \"%d\", got \"%s\".\n", n, ft_itoa(n));
    else
        printf("Try again: expected \"%d\", got \"%s\".\n", n, ft_itoa(n));

    n = 123456789;
    if (!strcmp("123456789", ft_itoa(n)))
        printf("OK: expected \"%d\", got \"%s\".\n", n, ft_itoa(n));
    else
        printf("Try again: expected \"%d\", got \"%s\".\n", n, ft_itoa(n));

    n = -42;
    if (!strcmp("-42", ft_itoa(n)))
        printf("OK: expected \"%d\", got \"%s\".\n", n, ft_itoa(n));
    else
        printf("Try again: expected \"%d\", got \"%s\".\n", n, ft_itoa(n));

    n = -2147483648;
    if (!strcmp("-2147483648", ft_itoa(n)))
        printf("OK: expected \"%d\", got \"%s\".\n", n, ft_itoa(n));
    else
        printf("Try again: expected \"%d\", got \"%s\".\n", n, ft_itoa(n));
}

int main ()
{
    test_itoa();
    return (0);
}
