#include "./mem.h"

void	memset_test(void *s)
{
	int i;
	
	i = BUFFER_SIZE;
	while (i > 0)
	{
		write(1, ft_memset(s, (char)(i+48), i), BUFFER_SIZE + 1);
		write(1, "\n", 1);
		i--;
	}
}