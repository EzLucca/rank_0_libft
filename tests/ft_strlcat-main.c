
#include "../libft.h"
#include <stdio.h>
#include <bsd/string.h>

int    main(void)
{
    char dst[100] = "1234";
    char dst2[100] = "1234";
    const char src[11] = "56789";
    int dstsize = 10;

    printf("ft_strlcat: %zu\n", ft_strlcat(dst, src, dstsize));
    printf("%s\n", dst);
    printf("strlcat: %zu\n", strlcat(dst2, src, dstsize));
    printf("%s\n", dst2);

    return (0);
}
