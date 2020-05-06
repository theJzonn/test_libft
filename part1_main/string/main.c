#include <unistd.h>
#include <string.h>

void	ft_putstr(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (*(str + i))
	{
		c = *(str + i);
		write(1, &c, 1);
		i++;
	}
}

void red () {
	ft_putstr("\033[1;31m");
}

void green() {
  //printf("\033[1;32m");
  ft_putstr("\033[1;32m");
}

void reset () {
  //printf("\033[0m");
  ft_putstr("\033[1;32m");
}

int		main()
{
	int i;

	green();
	i = 5;
	while (i--)
		ft_putstr("All ok\n");
	red();
	ft_putstr("error\n\nerr0r\n");
}