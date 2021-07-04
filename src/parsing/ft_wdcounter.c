#include "../../include/ft_fdf.h"

void	ft_check_str(char *str, char c)
{
	int i;
	i = 0;
	while (str[i] != c && str[i] != '\0')
	{
		if (!((str[i] <= '9' && str[i] >= '0') || (str[i] == '-') || (str[i] == '+')))
			ft_error("Error : Map incorrect !");
		i++;
	}
}

int		ft_wdcounter(char *str, char c)
{
	int i;
	int words;
	static int count;

	words = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == c && str[i] != '\0')
			i++;
		if (str[i])
			words++;
		ft_check_str((str + i), c);
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	if (!count)
		count = words;
	else
		if (count != words)
			ft_error("ERROR : Map incorrect !");
	return (words);
}