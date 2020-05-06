#include "srcs.h"

void	ft_putstr(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		ft_putchar(c);
		if (str[i + 1])
			i++;
		else
			return ;
	}
}