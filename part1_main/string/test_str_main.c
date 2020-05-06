#include "./str.h"
#include "../../srcs/srcs.h"
#include <stdio.h>

/*
	ft_strlen.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_strnstr.c \


	char			c;
	char			*str;
	size_t			len;
	struct test_s	*next;
*/

t_test_lst		*create_new_str(char const *str)
{
	t_test_lst *result = malloc(sizeof(t_test_lst));
	result->str = (void *)str;
	result->next = NULL;
	return (result);
}

void			print_lst(t_test_lst *lst)
{
	t_test_lst *cpy;

	cpy = lst;
	while (cpy->next)
	{
		ft_putstr((char *)cpy->str);
		cpy = cpy->next;
		ft_putchar('\n');
	}
}

t_test_lst		*add_to_lst(t_test_lst **lst, char const *str)
{
	t_test_lst *tmp;
	tmp = create_new_str(str);
	tmp->next = *lst;
	return (tmp);
}

int		main()
{
	t_test_lst *test_lst;
	t_test_lst *tmp;

	tmp = create_new_str("hello");
	test_lst = tmp;

	test_lst = add_to_lst(&test_lst, "test");

	test_lst = add_to_lst(&test_lst, "abcdefghijklmnopqrstuvwxyz");

	print_lst(test_lst);

	t_test_lst *cpy;

	cpy = test_lst;
	while (cpy->next)
	{
		//ft_putchar(ft_strchr(cpy->str, 'l'));
		puts(ft_strchr(cpy->str, 'l'));
		//printf("%s", res);
		//ft_putstr(res);
		ft_putchar('\n');
		cpy = cpy->next;
	}

	/*
	t_test_lst *head = NULL;
	t_test_lst *tmp;

	t_test test1, test2, test3, test4;

	test1.str = "test1";
	test1.len = 5;

	test2.str = "test2";
	test2.len = 5;

	test3.str = "abcdefghijklmnopqrstuvwxyz";
	test3.len = 26;

	test4.str = "Hello";
	test4.len = 5;

	tmp = create_new_test(test1);
	insert_at_head(&head, tmp);

	tmp = create_new_test(test2);
	insert_at_head(&head, tmp);

	tmp = create_new_test(test3);
	insert_at_head(&head, tmp);

	tmp = create_new_test(test4);
	insert_at_head(&head, tmp);

	print_t_test_lst(head);

	strlen_test();
	strchr_test(head);
	//strrchr_test(head);
	*/
}