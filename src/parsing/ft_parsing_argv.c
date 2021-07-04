#include "../../include/ft_fdf.h"

void ft_parsing_argv(int argc, char *file)
{
	int i;
	int stop;
    
    i = 0;
	if (argc != 2)
		ft_error("Error: ARGS ./fdf map.fdf");
    while (file[i] != '\0')
        i++;
    while (file[i] != '.')
        i--;
	stop = i;
	while(file[i] != '\0')
	{
    	if (file[i] != '.' && file[i] != 'f' && file[i] != 'd')
				ft_error("Error: FILE map.fdf");
		i++;
	}
	if (i != stop + 4)
		ft_error("Error: FILE map.fdf");
}