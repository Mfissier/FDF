/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchrsplit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adespond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 13:33:42 by adespond          #+#    #+#             */
/*   Updated: 2015/12/01 13:36:57 by adespond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchrsplit(char *s, int c)
{
	int		i;
	char	c2;
	char	*s2;

	c2 = (char)c;
	i = 0;
	while (s[i] != '\0' && c2 != s[i])
		i++;
	if (s[i] != c2)
		return (NULL);
	else
	{
		s2 = ft_strnew(ft_strlen(s) - 1);
		ft_strcpy(s2, s + i + 1);
		s[i] = '\0';
		return (s2);
	}
}
