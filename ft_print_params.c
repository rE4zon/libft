#include "libft.h"

void ft_print_params(int argc, char **argv)
{
    int i = 0;
    while(i < argc)
    {
        ft_putendl(argv[i]);
        i++;
    }
}
