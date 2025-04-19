#include <stdio.h>
#include "../libft.h"

void	test_split(void)
{
	printf("\n\n=========== TESTING SPLIT ============\n\n");
	char	**tab;
	unsigned int	i;
	char	s0[50] = "split         ";
	char	s1[50] = "      split       this for   me  !";
	char	s2[50] = "split       this for   me  !";
	char	s3[50] = "      split       this for   me  !       ";


	printf("---------- TEST 1 ----------\n");
	i = 0;
	tab = ft_split(s0, ' ');
	printf("Test string : \"%s\".\n\n", s0);
	if (!tab[0])
		printf("Try again.\n");
	while (tab[i])
	{
		printf("Tab [%d] : \"%s\".\n", i, tab[i]);
		i++;
	}
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);

	printf("\n---------- TEST 2 ----------\n");
	i = 0;
	tab = ft_split(s1, ' ');
	printf("Test string : \"%s\".\n\n", s1);
	if (!tab[0])
		printf("Try again.\n");
	while (tab[i])
	{
		printf("Tab [%d] : \"%s\".\n", i, tab[i]);
		i++;
	}
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);

	printf("\n---------- TEST 3 ----------\n");
	i = 0;
	tab = ft_split(s2, ' ');
	printf("Test string : \"%s\".\n\n", s2);
	if (!tab[0])
		printf("Try again.\n");
	while (tab[i])
	{
		printf("Tab [%d] : \"%s\".\n", i, tab[i]);
		i++;
	}
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);

	printf("\n---------- TEST 4 ----------\n");
	i = 0;
	tab = ft_split(s3, ' ');
	printf("Test string : \"%s\".\n\n", s3);
	if (!tab[0])
		printf("Try again.\n");
	while (tab[i])
	{
		printf("Tab [%d] : \"%s\".\n", i, tab[i]);
		i++;
	}
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);

	printf("\n---------- TEST 5 ----------\n");
	i = 0;
	tab = ft_split("", ' ');
	printf("Test string : \"%s\".\n\n", "");
	if (!tab[0])
		printf("Ok: expected null, got %s.\n", tab[0]);
	while (tab[i])
	{
		printf("Tab [%d] : \"%s\".\n", i, tab[i]);
		i++;
	}
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);

	printf("\n---------- TEST 6 ----------\n");
	i = 0;
	tab = ft_split("split", '\0');
	printf("Test string : \"%s\".\n\n", "split");
	if (!tab[0])
		printf("Try again.\n");
	while (tab[i])
	{
		printf("Tab [%d] : \"%s\".\n", i, tab[i]);
		i++;
	}
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);

	printf("\n---------- TEST 7 ----------\n");
	i = 0;
	tab = ft_split("\0aa\0bbb", '\0');
	printf("Test string : \"%s\".\n\n", "\\0aa\\0bbb");
	if (!tab[0])
		printf("Ok: expected null, got %s.\n", tab[0]);
	while (tab[i])
	{
		printf("Tab [%d] : \"%s\".\n", i, tab[i]);
		i++;
	}
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);

	printf("\n---------- TEST 8 ----------\n");
	i = 0;
	tab = ft_split("        ", ' ');
	printf("Test string : \"%s\".\n\n", "       ");
	if (!tab[0])
		printf("Ok: expected null, got %s.\n", tab[0]);
	while (tab[i])
	{
		printf("Tab [%d] : \"%s\".\n", i, tab[i]);
		i++;
	}
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);

	printf("\n---------- TEST 9 ----------\n");
	i = 0;
	tab = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
	printf("Test string : \"%s\".\n\n", "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse");
	if (!tab[0])
		printf("Try again.\n");
	while (tab[i])
	{
		printf("Tab [%d] : \"%s\".\n", i, tab[i]);
		i++;
	}
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);

	printf("\n---------- TEST 10 ----------\n");
	i = 0;
	tab = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i');
	printf("Test string : \"%s\" split at 'i'.\n\n", "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.");
	if (!tab[0])
		printf("Try again.\n");
	while (tab[i])
	{
		printf("Tab [%d] : \"%s\".\n", i, tab[i]);
		i++;
	}
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);

	printf("\n---------- TEST 11 ----------\n");
	i = 0;
	tab = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'z');
	printf("Test string : \"%s\" split at 'z'.\n\n", "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.");
	if (!tab[0])
		printf("Try again.\n");
	while (tab[i])
	{
		printf("Tab [%d] : \"%s\".\n", i, tab[i]);
		i++;
	}
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

int	main(void)
{
	test_split();
}
