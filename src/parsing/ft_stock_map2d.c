#include "../../include/ft_fdf.h"

void ft_stock_map2d(int *map2d, char *line)
{
    char **tab_num;
    int i;

    tab_num = ft_strsplit(line, ' ');
    i = 0;
    while (tab_num[i])
    {
        map2d[i] = ft_atoi(tab_num[i]);
        free(tab_num[i]);
        i++;
    }
    map2d[i] = '\0';
    free(tab_num);
}
