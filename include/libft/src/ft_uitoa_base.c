#include "libft.h"
#include <stdio.h>

char	*ft_uitoa_base(uintmax_t n, char const *base)
{
	uintmax_t	len;
	uintmax_t	div;
	char		*output;
	uintmax_t	i;
	uintmax_t	base_val;

	base_val = ft_strlen(base);
	div = 1;
	len = 1;
	while (n / div > base_val - 1)
	{
		len++;
		div *= base_val;
	}
	if ((output = ft_strnew(len)) == NULL)
		return (NULL);
	i = 0;
	while (div)
	{
		output[i++] = base[(n / div) % base_val];
		div /= base_val;
	}
	return (output);
}
