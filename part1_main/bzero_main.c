#include <stdio.h>
#include "../libft.h"

int		main()
{
	char test[] = "Voila un jolie test";
	char test2[] = "Voila un jolie test";

	char test3[] = "";
	char test4[] = "";

	void *pt1;
	void *pt2;

	printf("   bzero: **/%s/**	", test);
	bzero(test, 5);
	printf("**/%s/**\n", test);
	
	printf("ft_bzero: **/%s/**	", test2);
	ft_bzero(test2, 5);
	printf("**/%s/**\n", test2);

	printf("   bzero: **/%s/**	", test3);
	bzero(test3, 5);
	printf("**/%s/**\n", test3);

	printf("ft_bzero: **/%s/**	", test4);
	ft_bzero(test4, 5);
	printf("**/%s/**\n", test4);
	/*
	printf("bzero: %p ft_bzero: %p"), bzero(test, 5), ft_bzero(test, 5);
	
	printf("bzero: %p ft_bzero: %p"), bzero(test2, 0), ft_bzero(test2, 0);
	
	printf("bzero: %p ft_bzero: %p"), bzero(NULL, 5), ft_bzero(NULL, 5);
	*/
}