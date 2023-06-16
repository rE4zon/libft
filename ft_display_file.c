#include "libft.h"

void ft_display_file(char *filename)
{
    int fd = open(filename, O_RDONLY);

    char *buf;
    while(read(fd, &buf, 10))
    {
        write(1, &buf, 10);
    }

    close(fd);
}