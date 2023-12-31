#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct s_list
{
    void *content;
    size_t content_size;
    struct s_list *next;
} t_list;

int ft_strlen(const char *str);
int ft_abs(int i);
void ft_div_mode(int a, int b, int *div, int *mod);
void ft_ft(int *number);
void ft_putchar(char c);
int ft_is_negative(int number);
void ft_print_params(int argc, char **argv);
void ft_print_alphabet(void);
void ft_print_numbers(void);
void ft_putendl(char *str);
void ft_putstr(char *str);
int ft_sqrt(int number);
int ft_strcmp(const char *str,const char *str1);
void ft_swap(int *a, int *b);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint (int c);
int ft_tolower(int c);
int ft_toupper(int c);
void ft_display_file(char *filename);
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *str, int fd);
void ft_putendl_fd(char *str, int fd);
int ft_iterative_factorial(int nb);
int ft_recursive_factorial(int nb);
void *ft_memset(void *s, int c, size_t len);
void ft_bzero(void *s, size_t n);
void *ft_memalloc(size_t size);
void ft_memdel(void **ap);
char *ft_strnew(size_t size);
char *ft_strdup(char *s);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memccpy(void *dest, const void *src, int c, size_t n);
int *ft_range(int min, int max);
int ft_strequ(char const *s1, char const *s2);
int ft_strnequ(char const *s1, char const *s2, size_t n);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
void reverse_word(char *str);
void ft_foreach(int *tab, int length, void(*f)(int));
char *ft_strcpy(char *dest, const char *src);
char *ft_strncpy(char *dest, const char *src, size_t n);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strsub(char const *s, unsigned int start, size_t len);
char * ft_strjoin(char const *s1, char const *s2);
int ft_count_if(char **tab, int(*f)(char*));
char *ft_strmap(char const *s, char (*f)(char));
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
char *ft_strcat(char *dest, const char *src);
char *ft_strncat(char *dest, const char *src, size_t n);
void ft_sort_ints(int *tab, int size);
void ft_sort_params(char **c,int count);
void ft_putnbr(int n);
void ft_putnbr_fd(int n, int fd);
char *ft_strtrim(char const *s);
char * ft_itoa(int n);
char *ft_strndup(const char *s, size_t n);
char *ft_strstr(const char *haystack,const char *needle);
char ** ft_strsplit(char const *s, char c);
int ft_atoi(const char *nptr);
t_list *ft_lstnew(void const *content, size_t content_size);
void ft_lstadd(t_list **alst, t_list *new);
void ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void ft_lstdel(t_list **alst, void (*del)(void *, size_t));
t_list * ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem));

#endif 

