#include "mem.h"

void	memcpy_test(void *dest)
{
	write(1, ft_memset(dest, 'j', BUFFER_SIZE), BUFFER_SIZE);
	write(1, "\n", 1);

	write(1, ft_memcpy(dest, "test", 2), BUFFER_SIZE);
	write(1, "\n", 1);

	write(1, ft_memcpy(dest, "test", 3), BUFFER_SIZE);
	write(1, "\n", 1);

	write(1, ft_memcpy(dest, "test", 5), BUFFER_SIZE);
	write(1, "\n", 1);
}