#include "./str.h"
#include "../../srcs/srcs.h"

void	strlen_test()
{
	ft_putnbr(ft_strlen("1"));
	ft_putchar('\n');

	ft_putnbr(ft_strlen("lorem\tipsum\tdolor\nsit\namet\n"));
	ft_putchar('\n');

	ft_putnbr(ft_strlen(""));
	ft_putchar('\n');

	ft_putnbr(ft_strlen("\n\n\f\r\t"));
	ft_putchar('\n');

	ft_putnbr(ft_strlen("   "));
	ft_putchar('\n');
}
