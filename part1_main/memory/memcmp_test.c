#include "mem.h"

void	memcmp_test()
{
	char *res1 = "X		return 1 or -1 should return 0";
	char *res2 = "X		return 0 should return 1 or -1";
	char *res3 = "return 1 or -1 all ok";
	char *res4 = "return 0 all ok";

	if (ft_memcmp("test", "test6", 4))
		write(1, res1, ft_strlen(res1));
	else
		write(1, res4, ft_strlen(res4));
	write(1, "\n", 1);

	if (ft_memcmp("test", "test6", 5))
		write(1, res3, ft_strlen(res3));
	else
		write(1, res2, ft_strlen(res2));
	write(1, "\n", 1);
}