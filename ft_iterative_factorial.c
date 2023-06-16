#include "libft.h"

 int ft_iterative_factorial(int nb)
 {
    int i = 1;
    int result = 1;
    
    while(i <= nb)
    {
        result = i*result;
        i++;
    }
    return result;
 }