#include "libft.h"

bool is_Sorted_params(char **c, int count)
{
    int i = 0;
    while (i < count - 1 && ft_strcmp(c[i], c[i + 1]) < 0)
    {
        i++;
    }

    if (i < count - 1 && ft_strcmp(c[i], c[i + 1]) > 0)
    {
        return false;
    }

    return true;
}

void ft_sort_params(char **c, int count)
{
    int i = 0;

    while (is_Sorted_params(c, count) == false)
    {
        i = 0;
        while (i < count - 1)
        {
            if (ft_strcmp(c[i], c[i + 1]) > 0)
            {
                char *tmp = c[i];
                c[i] = c[i + 1];
                c[i + 1] = tmp;
            }

            i++;
        }
    }
}
