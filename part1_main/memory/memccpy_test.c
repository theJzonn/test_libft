#include "mem.h"

void		memccpy_test(void *dest)
{
	ft_memset(dest, 'j', BUFFER_SIZE + 1);
	write(1, dest, BUFFER_SIZE + 1);
	write(1, "\n", 1);

	write(1, ft_memccpy(dest, "test", 's', BUFFER_SIZE), BUFFER_SIZE + 1 - 3);
	write(1, "\n", 1);
	write(1, dest, BUFFER_SIZE + 1);
	write(1, "\n", 1);

	write(1, ft_memccpy(dest, "test", 'y', BUFFER_SIZE), BUFFER_SIZE + 1);
	write(1, "\n", 1);
	write(1, dest, BUFFER_SIZE + 1);
	write(1, "\n", 1);
}