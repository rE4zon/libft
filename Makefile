NAME = libft.a

CBJ = ft_strlen.c\
	ft_abs.c\
	ft_div_mode.c\
	ft_ft.c\
	ft_putchar.c\
	ft_is_negative.c\
	ft_print_alphabet.c\
	ft_print_numbers.c\
	ft_putendl.c\
	ft_putstr.c\
	ft_sqrt.c\
	ft_strcmp.c\
	ft_swap.c\
	ft_isalnum.c\
	ft_isalpha.c\
	ft_isascii.c\
	ft_isdigit.c\
	ft_isprint.c\
	ft_tolower.c\
	ft_toupper.c\
	ft_display_file.c\
	ft_putchar_fd.c\
	ft_putstr_fd.c\
	ft_putendl_fd.c\
	ft_iterative_factorial.c\
	ft_recursive_factorial.c\
	ft_memset.c\
	ft_bzero.c\
	ft_memalloc.c\
	ft_print_params.c\
	ft_memdel.c\
	ft_strnew.c\
	ft_strdup.c\
	ft_memcpy.c\
	ft_memccpy.c\
	ft_range.c\
	ft_strequ.c\
	ft_strnequ.c\
	ft_strchr.c\
	ft_strrchr.c\
	ft_memchr.c\
	ft_memcmp.c\
	ft_memmove.c\
	reverse_word.c\
	ft_foreach.c\
	ft_strcpy.c\
	ft_strncpy.c\
	ft_strncmp.c\
	ft_strsub.c\
	ft_strjoin.c\
	ft_count_if.c\
	ft_strmap.c\
	ft_strmapi.c\
	ft_strcat.c \
	ft_strncat.c\
	ft_sort_ints.c\
	ft_sort_params.c\
	ft_putnbr.c\
	ft_putnbr_fd.c\
	ft_strtrim.c\
	ft_itoa.c\
	ft_strndup.c\
	ft_strstr.c\
	ft_strsplit.c\
	ft_atoi.c\
	ft_lstnew.c\
	ft_lstadd.c \
	ft_lstiter.c\
	ft_lstdelone.c\
	ft_lstdel.c\
	ft_lstmap.c\
	main.c

INCL = inc

OBJ = $(CBJ:.c=.o)

FLAGS = -Wall -Wextra -g -Werror

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)

%.o: %.c
	@gcc -I$(INCL) $(FLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all