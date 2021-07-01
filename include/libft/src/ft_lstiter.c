/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adespond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 10:42:41 by adespond          #+#    #+#             */
/*   Updated: 2015/11/27 12:48:38 by adespond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
    if (lst == NULL)
        return ;
	while (lst->next != NULL)
	{
		(*f)(lst);
		lst = lst->next;
	}
	(*f)(lst);
}
