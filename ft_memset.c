/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adarmoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 18:08:17 by adarmoya          #+#    #+#             */
/*   Updated: 2026/01/28 20:07:54 by adarmoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*t;

	t = (unsigned char *)s;
	while (n--)
	{
		*(t++) = c;
	}
	return (s);
}
/*
int	main(void)
{
	char	k[6] = "Alina ";
	printf("%s\n", (char*)ft_memset(k, 100, 3));
	return (0);
}*/
