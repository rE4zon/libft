#include "libft.h"

int ft_abs(int i)
{
    /*
    if(i < 0)
    {
        return -i;
    }
    return i;
    */

    return(i<0) ? -i:i;
}