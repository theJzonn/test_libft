#include <stdio.h>
#include "../../libft/libft.h"

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


	//printf("*************** atoi *****************\n\n");
	while (i <= 11)
	{
		if (atoi(test[i]) == ft_atoi(test[i]))
			write(1, "✓		", ft_strlen("✓		"));
		else
			write(1, "X		", ft_strlen("X		"));

		write(1, "atoi: ", 6);
		write(1, (char)atoi(test[i]), 2);
		//"+ &(char)ft_atoi(test[i]) + "	ft_atoi: %d\n", 
		//	ft_strlen("atoi: %d	ft_atoi: %d\n"));
		i++;
	}
	//printf("\n*************** atoi *****************\n\n");
}