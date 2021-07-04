#include "../../include/ft_fdf.h"

void ft_stock_map(t_fdf *fdf, char *file)
{
    int fd;
    char *line;
    int i;

    fdf->height = ft_stock_height(file);
    if (fdf->height == -1)
        ft_error("ERROR : Height invalid !");
    fdf->map2d = (int **)malloc(sizeof(int *) * (fdf->height + 1));
    if (fdf->map2d == NULL)
        ft_error("ERROR : Memory crach !");
    fdf->width = ft_stock_width(file, fdf);
    if (fdf->width == -1)
        ft_error("ERROR : Width invalid !");
    fd = open(file, O_RDONLY, 0);
    if (fd == -1)
        ft_error("ERROR : File invalid");
    i = 0;
    while (get_next_line(fd, &line))
    {
        ft_stock_map2d(fdf->map2d[i], line);
        i++;
        free(line);
    }
//
    close(fd);
}