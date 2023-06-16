#include "libft.h"

bool is_Sorted(int *tab, int size)
{
    int i = 0;
    while (tab[i] < tab[i + 1] && i != size)
    {
        i++;
    }

    if (tab[i] > tab[i+1] && i != size)
    {
        return false;
    }

    return true;
}

void ft_sort_ints(int *tab, int size)
{
    int i = 0;
    
    while(is_Sorted(tab,size) == false)
    {
        i = 0;
        while(i < size)
        {
            if(tab[i] > tab[i+1])
            {
                ft_swap(&tab[i], &tab[i+1]);
            }
            i++;    
        }
    }
}
