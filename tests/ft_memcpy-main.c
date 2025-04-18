
#include "../libft.h"
#include <stdio.h>
// #include <string.h>

int main () 
{
	char dst[50];
	char src[50] = "This is a string";
	char dst2[50];
	char src2[50] = "This is a string";

	printf("before dst: %s\n", dst);
	printf("before src: %s\n", src);
	memcpy(dst, src, 7);
	printf("after dst: %s\n", dst);
	printf("after src: %s\n", src);

	printf("before dst: %s\n", dst);
	printf("before src: %s\n", src);
	ft_memcpy(dst2, src2, 7);
	printf("after dst: %s\n", dst);
	printf("after src: %s\n", src);

	return(0);
}
