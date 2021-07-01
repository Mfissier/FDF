/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adespond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 11:09:17 by adespond          #+#    #+#             */
/*   Updated: 2015/11/30 12:36:38 by adespond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int  ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char   *ptr1;
    unsigned char   *ptr2;
    int             i;

    if (!s1 && !s2 && !n)
        return (0);
    i = 0;
    ptr1 = (unsigned char *)s1;
    ptr2 = (unsigned char *)s2;
    while (n--)
    {
            if (ptr1[i] != ptr2[i])
                return (ptr1[i] - ptr2[i]);
            i++;
        }
    return (0);
}
