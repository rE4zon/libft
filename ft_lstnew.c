#include "libft.h"

t_list *ft_lstnew(void const *content, size_t content_size)
{
    t_list *node = (t_list *)ft_memalloc(sizeof(t_list));
    if (node == NULL)
        return NULL;

    if (content == NULL)
    {
        node->content = NULL;
        node->content_size = 0;
        node->next = NULL;
    }
    else
    {
        node->content = (void *)content;
        node->content_size = content_size;
        node->next = NULL;
    }
    return node;
}