/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adarmoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 14:52:11 by adarmoya          #+#    #+#             */
/*   Updated: 2026/02/11 14:52:13 by adarmoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*n;

	if (!(*lst) || !del || !lst)
		return ;
	n = (*lst);
	while ((*lst)->next)
	{
		n = (*lst);
		*lst = (*lst)->next;
		ft_lstdelone(n, del);
	}
	ft_lstdelone(*(lst), del);
	*lst = NULL;
}
