
#include "../libft.h"
#include <stdio.h>
#include <bsd/string.h>

void test(int test_nb, char *dst, const char *src, size_t size)
{
	char dst1[100];
	char dst2[100];

	// Initialize both buffers with the same content
	strlcpy(dst1, dst, sizeof(dst1));
	strlcpy(dst2, dst, sizeof(dst2));

	printf("Test %d\n", test_nb);
	printf("ft_strlcat: %zu\n", ft_strlcat(dst1, src, size));
	printf("%s\n", dst1);
	printf("strlcat: %zu\n", strlcat(dst2, src, size));
	printf("%s\n\n", dst2);

}

int    main(void)
{
	printf("\n--------ft_strlcat--------\n");
	test(1, "12345", "56", 4); //dest_len >= size
	test(2, "1234", "3456", 4); //dest_len = size
	test(3, "12345", "3456", 13); //src_len < size-dest_len
	test(4, "12345", "3456", 10); 

	return (0);
}
