#include "../../include/ft_fdf.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*string;
	size_t	size;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	size = ft_strlen(s1) + ft_strlen(s2);
	if (!(string = (char *)malloc((size + 1) * sizeof(char))))
		return (NULL);
	while (*s1)
		string[i++] = *(s1++);
	while (*s2)
		string[i++] = *(s2++);
	string[i] = '\0';
	return (string);
}