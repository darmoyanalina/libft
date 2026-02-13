/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adarmoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 20:21:53 by adarmoya          #+#    #+#             */
/*   Updated: 2026/01/30 14:40:21 by adarmoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dst;
	unsigned const char	*s;

	dst = (unsigned char *)dest;
	s = (unsigned const char *)src;
	while (n--)
		*(dst++) = *(s++);
	return (dest);
}
/*
int	main(void)
{
	char	k[] = "Alina";
	const char	*d = "hesoyam";
//	ft_memcpy(k, d, 4);
	//printf("%s\n", (char *)ft_memcpy(k, d, 10));
	printf("%s\n", (char *)memcpy(k, d, 10));
	return (0);
}*/
