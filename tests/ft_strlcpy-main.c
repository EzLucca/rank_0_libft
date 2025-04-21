
#include "../libft.h"
#include <stdio.h>
#include <bsd/string.h>

int    main(void)
{
    char dst[100] = "HelloWorld!";
    char dst2[100] = "HelloWorld!";
    const char src[11] = "teststring";
    int dstsize = -1;

	printf("\n\n--------ft_strlcpy--------\n\n");
    printf("ft_strlcpy: %zu\n", ft_strlcpy(dst, src, dstsize));
    printf("%s\n", dst);
    printf("strlcpy: %zu\n", strlcpy(dst2, src, dstsize));
    printf("%s\n", dst2);


    return (0);
}
