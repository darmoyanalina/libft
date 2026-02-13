/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adarmoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 20:08:46 by adarmoya          #+#    #+#             */
/*   Updated: 2026/01/28 20:20:31 by adarmoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*t;

	t = (unsigned char *)s;
	while (n--)
		*(t++) = 0;
}
/*
int	main(void)
{
	char	k[] = "Darmoyan";
	char	q[] = "Darmoyan";
	ft_bzero(k, 5);
	bzero(q, 5);
	printf("%s\n", &k[5]);
	printf("%s\n", &q[5]);
	return (0);
}*/
