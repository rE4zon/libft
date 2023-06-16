#include "libft.h"

int ft_count_if(char **tab, int(*f)(char*))
{
    int i = 0;
    int res = 0;

    while(tab[i][0] != '0')
    {
        if(f(tab[i]) == 1)
        {
            res++;
        }
        
        i++;
    }

    return res;
}