#include "libft.h"

t_list * ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem))
{
    if (lst == NULL || f == NULL)
    {
        return NULL;
    }

    t_list *new_list = NULL;
    t_list *iter = lst;

    while(iter != NULL)
    {
        t_list *new_node = f(iter);
        ft_lstadd(&new_list, new_node);
        iter = iter->next;
    }
    return new_list;
}