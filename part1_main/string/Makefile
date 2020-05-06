MAIN	=	test_str_main.c

LIBFT	=	../../../libft/libft.a

LIBAFF	=	../../srcs/libaffiche.a

SRCS	=	$(LIBAFF)
#		ft_lst_beta.c

TEST	=	strlen_test.c \
#			strchr_test.c \
			strrchr_test.c

testMem:
	gcc -Wall -Werror -Wextra  $(MAIN) $(TEST) $(LIBFT) $(SRCS)
	./a.out

clean:
	rm -f a.out

clear:
	clear

re: clear clean testMem