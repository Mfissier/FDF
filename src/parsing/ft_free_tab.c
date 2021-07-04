#include "../../include/ft_fdf.h"

void    ft_free_tab(t_fdf *fdf, int height)
{
    int i;
    i = 0;

    while (i < height)
    {
        free(fdf->map2d[i]);
        i++;
    }
    free(fdf->map2d);
}