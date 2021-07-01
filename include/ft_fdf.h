#ifndef FT_FDF_H
#define FT_FDF_H


# include <limits.h>
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <fcntl.h>
# include <stdarg.h>
# include <wchar.h>
# include <stdio.h>
# include "libft/includes/libft.h"

typedef struct s_fdf

{

    int width;
    int height;
    int **map2D;
    int *map_x;
}               t_fdf;
int             ft_error(char *str);
int             ft_stock_map(t_fdf *fdf, char *file);

#endif

