
#include "../libft.h"
#include <stdio.h>
#include <bsd/string.h>

int    main(void)
{
    char dst[100] = "HelloWorld!";
    char dst2[100] = "HelloWorld!";
    const char src[11] = "teststring";
    int dstsize = -1;

    printf("ft_strlcat: %zu\n", ft_strlcat(dst, src, dstsize));
    printf("%s\n", dst);
    printf("strlcat: %zu\n", strlcat(dst2, src, dstsize));
    printf("%s\n", dst2);

    return (0);
}
