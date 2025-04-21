
#include <stdio.h>
#include "../libft.h"

void	test(int test_nb, char *s1, char (*s2)(unsigned int, char))
{
    // int i = 0;
    char *a = ft_strmapi(s1, s2);

    printf("Test %d\n", test_nb);
    printf("String: %s\n", a);
}

char my_func(unsigned int i, char str)
{
    if (i % 2 == 0) 
    {
        return str - 32;
    }
    return str;
}

int main(void)
{

    printf("\n--------ft_strmapi--------\n");
    test(1, "this", my_func);
    test(2, "the", my_func);
    test(3, "", my_func);
    test(4, "BETWEEN", my_func);
    test(5, "     ", my_func); 
    return(0);	
}
