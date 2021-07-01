#include "../include/ft_fdf.h"

int ft_stock_height(char *file)
{
    char *line;
    int fd;
    int height;

    fd = open(file, O_RDONLY, 0);
    if (fd == -1)
        return (ft_error("ERROR : File invalid"));
    height = 0;
    while(get_next_line(fd, &line))
    {
        height++;
        free(line);
    }
    close(fd);
    return (height);
}

int             ft_wdcounter(char const *str, char c)
{
    int i;
    int words;

    words = 0;
    i = 0;
    while (str[i])
    {
        while (str[i] == c && str[i] != '\0')
            i++;
        if (str[i])
            words++;
        while (str[i] != c && str[i] != '\0')
            i++;
    }
    return (words);
}

void stock_map2d(int *map2D, char *line)
{
    char **tab_num;
    int i;
    
    i = 0;
    tab_num = ft_strsplit(line, ' ');
    while (tab_num[i])
    {
        map2D[i] = ft_atoi(tab_num[i]);
        free(tab_num[i]);
        i++;
    }
    map2D[i] = '\0';
    free(tab_num);
}

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
        return(ft_error("ERROR: File invalide !"));
    check_gnl = 1;
    while(check_gnl) 
    {
        check_gnl = get_next_line(fd, &line);
        if (check_gnl <= 0)
            break;
        width = ft_wdcounter(line, ' ');
        fdf->map2D[i++] = (int*)malloc(sizeof(int) * (width));
        if (fdf->map2D == NULL)
            return (-1);
        free(line);
    }
    if (check_gnl == -1)
        return(ft_error("ERROR : File incorrect !"));
    close(fd);
    return (width);
}

void    ft_free_tab(t_fdf *fdf, int height)
{
    int i;
    i = 0;

    while (i < height)
    {
        free(fdf->map2D[i]);
        i++;
    }
    free(fdf->map2D);
}

int ft_stock_map(t_fdf *fdf, char *file)
{
    int fd;
    char *line;
    int i;

    fdf->height = ft_stock_height(file);
    if (fdf->height == -1)
        return (-1);
    fdf->map2D = (int **)malloc(sizeof(int *) * (fdf->height + 1));
    if (fdf->map2D == NULL)
        return (-1);
    fdf->width = ft_stock_width(file, fdf);
    if (fdf->width == -1)
        return (-1);
    fd = open(file, O_RDONLY, 0);
    if (fd == -1)
        return (ft_error("ERROR : File invalid"));
    i = 0;
    while (get_next_line(fd, &line))
    {
        stock_map2d(fdf->map2D[i], line);
        i++;
        free(line);
    }
    ft_free_tab(fdf, fdf->height);
    // Pour free la map2D  a mettre a la fin du main en realité !
    close(fd);
    return (1);
}
