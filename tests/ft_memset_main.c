#include "../libft.h"
#include <stdio.h>
#include <string.h>

int main () 
{
	char str[50] = "Welcome to Hive Helsinki";
	char str2[50] = "Welcome to Hive Helsinki";

	puts(str);
	memset(str, '#', 7);
	puts(str);

	puts(str2);
	ft_memset(str2, '#', 7);
	puts(str2);

	return(0);
}
