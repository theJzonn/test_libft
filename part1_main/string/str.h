#ifndef STR_H
# define STR_H

#include "../../../libft/libft.h"

typedef	struct		s_test{
	char			c;
	void		*str;
	size_t			len;
}					t_test;

typedef	struct		s_test_lst{
	void				*str;
	struct s_test_lst	*next;
}					t_test_lst;

t_test_lst		*create_new_test(t_test test);
void			insert_at_head(t_test_lst **head, t_test_lst *tmp);
void			print_t_test_lst(t_test_lst *head);

void	strlen_test();
void	strchr_test(t_test_lst *head);
void	strrchr_test(t_test_lst *head);

#endif