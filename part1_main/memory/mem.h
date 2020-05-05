#ifndef MEM_H
# define MEM_H

#include "../../../libft/libft.h"

# define		BUFFER_SIZE 4

typedef	struct		test_s{
	char	c;
	char	*str;
	size_t	len;
}						test_t;

void	memset_test(void *s);
void	bzero_test();
void	memcpy_test(void *dest);
void	memccpy_test(void *dest);
void	memmove_test(void *dest);
void	memchr_test();
void	memcmp_test();

#endif