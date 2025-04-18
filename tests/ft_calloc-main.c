
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
	void *ptr;
	void *ptr2;

	ptr = calloc(INT_MAX, 2);
	ptr2 = ft_calloc(INT_MAX, 2);

	printf("%p\n", ptr);
	printf("%p\n", ptr2);
	free(ptr);
	free(ptr2);
    return (0);
}
