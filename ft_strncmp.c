/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adarmoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 12:13:56 by adarmoya          #+#    #+#             */
/*   Updated: 2026/02/02 12:27:35 by adarmoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i < n && !s1[i] && s2[i])
		return (0 - s2[i]);
	if (i < n && s1[i] && !s2[i])
		return (s1[i]);
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_strncmp("Aa", "Aaafk", 3));
	return (0);
}*/
