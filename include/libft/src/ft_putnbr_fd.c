/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adespond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 17:45:11 by adespond          #+#    #+#             */
/*   Updated: 2015/11/27 13:02:28 by adespond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
        long    nb;

        nb = n;
        if (nb < 0)
        {
                ft_putchar_fd('-', fd);
                nb = -nb;
        }
        if (nb >= 10)
        {
                ft_putnbr_fd((int)(nb / 10), fd);
                ft_putnbr_fd((int)(nb % 10), fd);
        }
        else
                ft_putchar_fd((char)nb + '0', fd);
}
