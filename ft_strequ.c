#include "libft.h"

int ft_strequ(char const *s1, char const *s2)
{
    int i = 0;
    while(s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
    {
        i++;

        if (s1[i] != s2[i])
        {
            return 0;
        }
    }

    return 1;
}