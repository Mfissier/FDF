/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adespond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 11:54:16 by adespond          #+#    #+#             */
/*   Updated: 2015/11/30 17:52:31 by adespond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
    int        i;
    char    *dup;

    i = 0;
    dup = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
    if (!dup)
        return (NULL);
    while (s1[i] != '\0')
    {
        dup[i] = s1[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}
