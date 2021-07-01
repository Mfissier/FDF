#include "libft.h"
#include <stdio.h>

char	*ft_ultoa_base(unsigned long nbr, char const *base)
{
	unsigned long	len;
	unsigned long	div;
	char			*output;
	unsigned long	i;
	unsigned long	base_val;

	base_val = ft_strlen(base);
	div = 1;
	len = 1;
	while (nbr / div > base_val - 1)
	{
		len++;
		div *= base_val;
	}
	if ((output = ft_strnew(len)) == NULL)
		return (NULL);
	i = 0;
	while (div)
	{
		output[i++] = base[(nbr / div) % base_val];
		div /= base_val;
	}
	return (output);
}
