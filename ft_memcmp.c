/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adarmoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 13:21:32 by adarmoya          #+#    #+#             */
/*   Updated: 2026/02/02 13:48:36 by adarmoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*k1;
	const unsigned char	*k2;

	k1 = (const unsigned char *)s1;
	k2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (k1[i] != k2[i])
			return (k1[i] - k2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_memcmp("Aacdsd", "Aadkg", 4));
	printf("%d\n", memcmp("Aacdsd", "Aadkg", 4));
	return (0);
}*/
