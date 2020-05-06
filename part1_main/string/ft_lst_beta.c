#include "str.h"
#include <stdio.h>

t_test_lst		*create_new_test(t_test test)
{
	t_test_lst *result = (t_test_lst *)malloc(sizeof(t_test_lst));
	result->test = test;
	result->next = NULL;
	return (result);
}

void			insert_at_head(t_test_lst **head, t_test_lst *tmp)
{
	tmp->next = *head;
	*head = tmp;
}

void			print_t_test_lst(t_test_lst *head)
{
	t_test_lst *cpy = head;
	while(cpy)
	{
		printf("struct.str: %s\n", (char const *)cpy->test.str);
		cpy = cpy-> next;
	}
}