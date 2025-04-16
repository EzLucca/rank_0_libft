
#include "../libft.h"
#include <stdio.h>
#include <bsd/string.h>
#include <limits.h>
#include <stdint.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*temp_ptr;

	temp_ptr = (unsigned char *) b;
	printf("size of len is %zu\n", len);
	while (len > 0)
	{
		(*temp_ptr++) = (unsigned char) c;
		len--;
	}
	return (b);
}

int    main(void)
{
	/*
    char dst[100] = "HelloWorld!";
    char dst2[100] = "HelloWorld!";
    const char src[11] = "teststring";
    int dstsize = -1;
	*/
    // printf("ft_strlcpy: %zu\n", ft_strlcpy(dst, src, dstsize));
    // printf("%s\n", dst);
    // printf("strlcpy: %zu\n", strlcpy(dst2, src, dstsize));
    // printf("%s\n", dst2);
	void *ptr;

	void *ptr2;

	//ptr = ft_calloc(SIZE_MAX, 1);
	//ptr = ft_calloc(SIZE_MAX, SIZE_MAX);
	ptr = calloc(SIZE_MAX, 2);
	ptr2 = ft_calloc(SIZE_MAX, 2);
	//while (*ptr)
	//ft_memset(ptr, 1, SIZE_MAX * SIZE_MAX);
	//(*(char *)(ptr + SIZE_MAX)) = (char)0;
	//ptr++;
	//(*(char *)(ptr)) = (char)65;
	//printf("%c\n", *((char *)(ptr)));
	printf("%p\n", ptr);
	printf("%p", ptr2);
    return (0);
}
