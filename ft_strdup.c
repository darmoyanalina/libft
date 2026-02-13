/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adarmoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 14:23:36 by adarmoya          #+#    #+#             */
/*   Updated: 2026/02/05 14:42:33 by adarmoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*p;
	char	*tmp;
	int		i;

	p = malloc(ft_strlen(s) + 1);
	if (!p)
		return (NULL);
	tmp = p;
	i = 0;
	while (s[i])
		*(tmp++) = s[i++];
	p[i] = '\0';
	return (p);
}
/*
int	main(void)
{
	char	*p;
	p = ft_strdup("Hello");
	printf("%s\n", p);
	return (0);
}*/
