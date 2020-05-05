#include "mem.h"

void	memchr_test()
{
	write(1, "Find the c charactere tu voit", 29);
	write(1, "\n", 1);

	write(1, ft_memchr("Find the c charactere tu voit", 'c', 29), 
		ft_strlen(ft_memchr("Find the c charactere tu voit", 'c', 29)));
	write(1, "\n", 1);

	write(1, ft_memchr("Find the c charactere tu voit", 'c', 8), 2);
	write(1, "\n", 1);

	write(1, ft_memchr("Find the c charactere tu voit", 'v', 28), 4);
	write(1, "\n", 1);
}