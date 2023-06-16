#include "libft.h"

char *ft_strtrim(char const *s)

{
    int start = 0;
    if (s == NULL)
    {
        return NULL;
    }

    while(s[start] == '\n' || s[start] == '\t' || s[start] == ' ')
    {
        start++;
    }

    int end = ft_strlen(s) - 1;
     while(end >= 0 && (s[end] == '\n' || s[end] == '\t' || s[end] == ' '))
    {
        end--;
    }

    if (end < start)
    {
        return ft_strdup("");
    }

    size_t len = end - start + 1;
    char *res = (char*)malloc(sizeof(char) * (len + 1));
    if (res == NULL)
    {
        return NULL;
    }
    ft_strncpy(res, s + start, len);
    res[len] = '\0';
    

    return res;
    
}