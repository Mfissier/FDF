#include "../../include/ft_fdf.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	int		i;

	i = 0;
	while (s1[i])
		i++;
	if (!(copy = (char *)malloc((i * sizeof(char)) + 1)))
		return (0);
	i = -1;
	while (s1[++i])
		copy[i] = s1[i];
	copy[i] = '\0';
	return (copy);
}