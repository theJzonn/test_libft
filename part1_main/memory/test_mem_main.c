#include "./mem.h"

/*
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memccpy.c \
	ft_memmove.c \
	ft_memchr.c \
	ft_memcmp.c \
*/

int		main()
{
	void	*s[BUFFER_SIZE + 1];

	/* 0xCD == malloc (clean memory) */
	memset(s, 0xCD, BUFFER_SIZE + 2);
	bzero(s, BUFFER_SIZE + 1);

	write(1, "memset_test\n", sizeof("memset_test\n"));
	memset_test(s);

	write(1, "bzero_test\n", sizeof("bzero_test\n"));
	bzero_test();

	write(1, "memcpy_test\n", sizeof("memcpy_test\n"));
	memcpy_test(s);

	write(1, "memccpy_test\n", sizeof("memccpy_test\n"));
	memccpy_test(s);

	write(1, "memove_test\n", sizeof("memove_test\n"));
	memmove_test(s);

	write(1, "memchr_test\n", sizeof("memchr_test\n"));
	memchr_test();

	write(1, "memcmp_test\n", sizeof("memcmp_test\n"));
	memcmp_test();

	return (0);
}