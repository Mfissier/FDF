#include "./include/ft_fdf.h"


int main(int ac, char **av)
{
    t_fdf *fdf;
    int fd;

    if (ac != 2)
        ft_error("ERROR : Usage is : ./fdf map.fdf\n");
    fd = open(av[1], O_DIRECTORY);
    if (fd != -1)
        ft_error("ERROR : Directory is invalid !\n");
    close(fd);
    fdf = (t_fdf*)malloc(sizeof(fdf));
	ft_stock_map(fdf, av[1]);
	ft_free_tab(fdf, fdf->height);
    free(fdf);
    return (0);
}
