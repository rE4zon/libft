#include "libft.h"

int static ft_strlen_delimitor(const char *str, int n)
{
    int count = 0;
    while(str[count] != n && str[count] != '\0')
    {
        count++;
    }
    
    return count;
}

char static count_words(char const *s, char c)
{
    size_t count = 0;
    int i = 0;
    
    while (s[i] != '\0')
    {
        if (s[i] != c)
        {
            count++;
            while (s[i] != '\0' && s[i] != c)
            {
                i++;
            }
        }
        else
        {
            i++;
        }
    }
    
    return count;
} 

char ** ft_strsplit(char const *s, char c)
{
    int word_count = count_words(s, c);
    char **dest = ft_memalloc((word_count + 1) * sizeof(char *));
   
    int i = 0;
    int j = 0;
    
    while(s[i] != '\0')
    {
        if(s[i] == c)
        {
            i++;
        }
        else
        {
            int start = i;
            int len = ft_strlen_delimitor(&s[i], c);
            dest[j] = ft_strsub(s, start, len);
            i += len;
            j++;
        }
    }

    dest[j] = NULL;
    return dest;
} 