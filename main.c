
#include "./include/ft_fdf.h"

int main(int ac, char **av)
{
    t_fdf *fdf;
    int fd;

    if (ac != 2)
        return (ft_error("ERROR : Usage is : ./fdf map.fdf\n"));
    fd = open(av[1], O_DIRECTORY);
    if (fd != -1)
        return (ft_error("ERROR : Directory is invalid !\n"));
    close(fd);
    fdf = (t_fdf*)malloc(sizeof(fdf));
    if (ft_stock_map(fdf, av[1]) == -1)
        return (-1);
    free(fdf);
    return (0);
}
