/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adarmoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 14:46:59 by adarmoya          #+#    #+#             */
/*   Updated: 2026/02/07 12:21:30 by adarmoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dst;
	unsigned const char	*s;

	dst = (unsigned char *)dest;
	s = (unsigned const char *)src;
	if (s < dst && dst < s + n)
	{
		dst += n - 1;
		s += n - 1;
		while (n--)
		{
			*(dst--) = *(s--);
		}
	}
	else
		dst = ft_memcpy(dest, src, n);
	return (dest);
}
/*
int	main(void)
{
	char	k[] = "1se49";
	//char	*s = "42 Yerevan";
	printf("%s\n", (char *)ft_memmove(k + 2, k, 3));
	//printf("%s\n", (char *)ft_memmove(k, s, 3));
	return (0);
}*/
