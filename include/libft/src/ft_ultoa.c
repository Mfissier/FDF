/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adespond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 15:27:01 by adespond          #+#    #+#             */
/*   Updated: 2015/11/30 13:57:22 by adespond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_char(unsigned long n)
{
	int		len;

	len = 1;
	while (n > 9)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char		*ft_ultoa(unsigned long n)
{
	char	*s;
	int		i;
	int		len;

	i = 0;
	len = ft_count_char(n);
	s = (char *)malloc(sizeof(char) * len + 1);
	if (s == NULL)
		return (NULL);
	s[len] = '\0';
	while (n > 9)
	{
		s[len - 1] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	s[len - 1] = n + '0';
	return (s);
}
