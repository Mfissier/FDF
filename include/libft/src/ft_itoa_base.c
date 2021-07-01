#include "libft.h"
#include <stdio.h>

char	*ft_itoa_base(unsigned long long n, char const *base)
{
    char                *str;
    unsigned long long  i;
    char                *j;
    char                *k;

    i = ft_strlen(base);
    if (!(str = (char *)malloc(sizeof(char) * 2)))
            return (NULL);
    if (n >= i)
    {
        j = ft_itoa_base(n / i, base);
        k = ft_itoa_base(n % i, base);
        str = ft_strjoin(j, k);
        free(j);
        free(k);
    }
    else if (n < i)
    {
        str[0] = base[n];
        str[1] = '\0';
    }
    return (str);
}
