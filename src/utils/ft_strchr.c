#include "../../include/ft_fdf.h"

char	*ft_strchr(const char *str, int c)
{
	if (c == 0)
	{
		while (*str)
			str++;
		return ((char*)str);
	}
	while (*str)
	{
		if (*str == (unsigned char)c)
			return ((char*)str);
		str++;
	}
	return (0);
}