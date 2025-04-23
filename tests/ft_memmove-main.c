
#include "../libft.h"
#include <stdio.h>
#include <string.h>

int main () 
{
	char dest_str[] = "oldstring";
	char dest_str2[] = "OLDSTRING";
	const char src_str[]  = "hello";
	char *ptr = &dest_str[3];
	char *ptr1 = &dest_str2[3];
	char *ptr2 = &dest_str[0];
	char *ptr3 = &dest_str2[0];

	printf("\n\n--------ft_memmove--------\n\n");
	printf("Before memmove: dest = %s, src = %s\n", dest_str, src_str);
	memmove(ptr, ptr2, 5);
	printf("After memmove: dest = %s, src = %s\n", dest_str, src_str);

	printf("Before ft_memmove: dest = %s, src = %s\n", dest_str2, src_str);
	ft_memmove(ptr1, ptr3, 5);
	printf("After ft_memmove: dest = %s, src = %s\n", dest_str2, src_str);
	return(0);
}
