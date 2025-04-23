
#include "../libft.h"
#include <stdio.h>


void test(int test_nb, void *content)
{
	char *data = ft_strdup(content);
	t_list *l =  ft_lstnew(data);
	// t_list *l;

	printf("Test %d\n", test_nb);
	// printf("content = %d\n", ft_lstnew.content());

	if (l)
	{
		printf("Content: %s\n", (char *) l-> content);
		printf("Next: %p\n", (void *) l-> next);
	}
	else
		printf("Failed to allocate");
	free(data);
	free(l);
}

int main(void)
{

	test(1, "42");
	test(2, "spellcaster");
	test(3, "");
	return (0);
}
