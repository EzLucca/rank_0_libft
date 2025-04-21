
#include "../libft.h"
#include <stdio.h>
// #include <string.h>

int main()
{
	// int i = 0;
	char *s = "aabaaaababbbabatrimbaaababbbbbbbbbb";
	char *w;

	w = ft_strtrim(s, "ab");
	puts(w);	

}
