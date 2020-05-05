#include <stdio.h>
#include "../libft.h"

int main()
{
	char	**test;
	int		i;

	i = 0;
	test = (char **)malloc(sizeof(*test) * (11 + 1));
	test[0] = "0";
	test[1] = "-0";
	test[2] = "1";
	test[3] = "-1";
	test[4] = "-2147483648";
	test[5] = "+2147483647";
	test[6] = "  123";
	test[7] = " +123";
	test[8] = "++123";
	test[9] = " -123";
	test[10] = "--123";
	test[11] = "";


	printf("*************** atoi *****************\n\n");
	while (i <= 11)
	{
		if (atoi(test[i]) == ft_atoi(test[i]))
			printf("✓	");
		else
			printf("X	");
		printf("atoi: %d	ft_atoi: %d\n", atoi(test[i]), ft_atoi(test[i]));
		i++;
	}
	printf("\n*************** atoi *****************\n\n");
}