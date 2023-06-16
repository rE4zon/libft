#include "libft.h"

void ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
    if (alst == NULL || *alst == NULL || del == NULL)
    {
        return;
    }

    t_list *current = *alst;
    t_list *iter = NULL;

    while(current != NULL)
    {
        iter = iter->next;
        del(current->content, current->content_size);
        free(current);
        current = iter;
    }

    *alst = NULL;
}