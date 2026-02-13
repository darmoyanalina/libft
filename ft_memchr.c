/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adarmoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 12:27:57 by adarmoya          #+#    #+#             */
/*   Updated: 2026/02/07 12:50:40 by adarmoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*k;
	size_t				i;
	unsigned char		l;

	k = (const unsigned char *)s;
	i = 0;
	l = (unsigned char)c;
	while (i < n)
	{
		if (k[i] == l)
			return ((void *)&k[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char s[] = {0, 1, 2 ,3 ,4 ,5};
	printf("%s\n", (char *)ft_memchr("Hiii3", 'i', 5));
	printf("%d\n", ft_memchr(s, 2 + 256, 3) == s + 2);
	return (0);
}*/
