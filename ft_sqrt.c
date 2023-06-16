#include "libft.h"

int ft_sqrt(int number)
{
    int sqrt = 1;
    while(sqrt < number)
    {
        if(sqrt * sqrt == number)
        {
            break;
        }
        sqrt++;
    }

    if(sqrt == number)
    {
        return 0;
    }

    return sqrt;
}
