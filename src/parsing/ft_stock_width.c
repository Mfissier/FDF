#include "../../include/ft_fdf.h"

int ft_stock_width(char *file, t_fdf *fdf)
{
    char *line;
    int fd;
    int width;
    int check_gnl;
    int i;

    i = 0;
    fd = open(file, O_RDONLY, 0);
    if (fd == -1)
        ft_error("ERROR: File invalide !");
    check_gnl = 1;
    while(check_gnl) 
    {
        check_gnl = get_next_line(fd, &line);
        if (check_gnl <= 0)
            break;
        width = ft_wdcounter(line, ' ');
        fdf->map2d[i++] = (int*)malloc(sizeof(int) * (width));
        if (fdf->map2d == NULL)
            ft_error("ERROR: Memory crach");
        free(line);
    }
    if (check_gnl == -1)
        ft_error("ERROR : File incorrect !");
    close(fd);
    return (width);
}