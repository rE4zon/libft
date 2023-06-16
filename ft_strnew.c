#include "libft.h"
char *ft_strnew(size_t size)
{
    char *mem = ft_memalloc(size + 1);
    ft_memset(mem, '\0', size + 1);
    return mem;
}