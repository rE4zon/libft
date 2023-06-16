#include "libft.h"

int ft_countlen1(int n)
{
    int count = 0;
    if(n < 0)
    {
        count++;
    }

    while(n != 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}

int ft_atoi(const char *nptr)
{
    int i = 0;
    int result = 0;

    if (nptr == NULL)
        return 0;

    while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n' || nptr[i] == '\r' || nptr[i] == '\f' || nptr[i] == '\v')
        i++;
    
    if (nptr[0] == '-' || nptr[0] == '+')
    {
        i++;
    }

    while (nptr[i] >= '0' && nptr[i] <= '9')
    {
        result = (result * 10) + (nptr[i] - '0');
        i++;
    }
    
    if (nptr[0] == '-')
    {
        result = -result;
    }

    return result;
}