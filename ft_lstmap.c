/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adarmoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 15:59:12 by adarmoya          #+#    #+#             */
/*   Updated: 2026/02/11 15:59:21 by adarmoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*fin;
	t_list	*tmp;
	t_list	*new_l;

	if (!lst || !f || !del)
		return (NULL);
	fin = lst;
	new_l = NULL;
	while (fin)
	{
		tmp = ft_lstnew(f(fin->content));
		if (!tmp)
		{
			ft_lstclear(&new_l, del);
			return (NULL);
		}
		ft_lstadd_back(&new_l, tmp);
		fin = fin->next;
	}
	return (new_l);
}
