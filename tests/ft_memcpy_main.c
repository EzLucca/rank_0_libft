
#include "../libft.h"
#include <stdio.h>
// #include <string.h>

int main () 
{
	char str[50] = "Welcome to Hive Helsinki";
	char src[50];
	char str2[50] = "Welcome to Hive Helsinki";
	char src2[50];

	puts(str);
	puts(src);
	memcpy(str, src, 7);
	puts(str);
	puts(src);

	puts(str2);
	puts(src2);
	ft_memcpy(str2, src2, 7);
	puts(str2);
	puts(src2);

	return(0);
}
