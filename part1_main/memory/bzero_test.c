#include "mem.h"
#include <stdio.h>

void	bzero_test()
{
	char test[] = "test";
	char *res_ok = "all ok\n";
	char *res_error = "X	error\n";

	ft_bzero(test, 3);
	if (!test[3])
		write(1, res_error, ft_strlen(res_error));
	else
		write(1, res_ok, ft_strlen(res_ok));
	
	ft_bzero(test, 5);
	if (test[4] || test[0])
		write(1, res_error, ft_strlen(res_error));
	else
		write(1, res_ok, ft_strlen(res_ok));
}