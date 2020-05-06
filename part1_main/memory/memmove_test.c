#include "mem.h"

void	memmove_test(void *dest)
{
	write(1, ft_memset(dest, 'j', BUFFER_SIZE), BUFFER_SIZE);
	write(1, "\n", 1);

	write(1, ft_memmove(dest, "test", 2), BUFFER_SIZE);
	write(1, "\n", 1);

	write(1, ft_memmove(dest, "test", 3), BUFFER_SIZE);
	write(1, "\n", 1);

	write(1, ft_memmove(dest, "test", 4), BUFFER_SIZE);
	write(1, "\n", 1);
}