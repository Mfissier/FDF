#include "../../include/ft_fdf.h"

void	ft_error(char *msg)
{
	ft_putstr_fd(msg, 2);
	exit(1);
}