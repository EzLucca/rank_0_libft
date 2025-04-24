
#include <string.h>
#include <stdio.h>
#include "../libft.h"

void	test(int test_nb, char *s, void (*f)(unsigned int, char*))
{
    // int i = 0;
    ft_striteri(s, f);

    printf("Test %d\n", test_nb);
    printf("String: %s\n", s);
}

void	my_func(unsigned int i, char *str)
{
    if (i % 2 == 0) 
    {
        *str -= 32;
    }
}

int main(void)
{

    printf("\n--------ft_striteri--------\n");
    test(1, strdup("this"), NULL);
    test(2, strdup("the"), my_func);
    test(3, strdup(""), my_func);
    test(4, strdup("between"), my_func);
    test(5, strdup("     "), my_func); 
    return(0);	
}
