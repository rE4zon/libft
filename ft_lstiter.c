#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
    t_list *iter = lst;
    while (iter != NULL)
    {
        f(iter);
        iter = iter->next;
    }
}