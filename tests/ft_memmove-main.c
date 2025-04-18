
#include "../libft.h"
#include <stdio.h>
#include <string.h>

int main () 
{
	char dest_str[] = "oldstring";
	char dest_str2[] = "OLDSTRING";
	const char src_str[]  = "hello";
	printf("Before memmove: dest = %s, src = %s\n", dest_str, src_str);
	memmove(dest_str, src_str, 9);
	printf("After memmove: dest = %s, src = %s\n", dest_str, src_str);

	printf("Before ft_memmove: dest = %s, src = %s\n", dest_str2, src_str);
	ft_memmove(dest_str2, src_str, 9);
	printf("After ft_memmove: dest = %s, src = %s\n", dest_str2, src_str);
	return(0);
}
