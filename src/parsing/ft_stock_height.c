#include "../../include/ft_fdf.h"

int ft_stock_height(char *file)
{
    char *line;
    int fd;
    int height;

    fd = open(file, O_RDONLY, 0);
    if (fd == -1)
        ft_error("ERROR : File invalid");
    height = 0;
    while(get_next_line(fd, &line))
    {
        height++;
        if (!(line[0] == ' ' 
            || (line[0] <= '9' && line[0] >= '0') 
            || (line[0] == '-') || (line[0] == '+')))
            ft_error("ERROR : Map incorrect !");
        free(line);
    }
    close(fd);
    return (height);
}