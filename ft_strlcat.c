/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adarmoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 11:28:20 by adarmoya          #+#    #+#             */
/*   Updated: 2026/01/31 14:29:00 by adarmoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	s;

	i = ft_strlen(dst);
	j = 0;
	s = i;
	if (!size || size <= i)
		return (size + ft_strlen(src));
	while (i < size - 1 && src[j])
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (s + ft_strlen(src));
}
/*
int	main(void)
{
	char	k[20] = "Alina ";
	char	*p = "Darmoyan";
	printf("%zu\n", ft_strlcat(k, p, 20));
	printf("%s\n", k);
	return (0);
}*/
