/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adarmoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 17:16:02 by adarmoya          #+#    #+#             */
/*   Updated: 2026/01/28 18:07:15 by adarmoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	size;

	size = 0;
	while (s[size])
		size++;
	return (size);
}
/*
int	main(void)
{
	char* k = "Alina ";
	printf("%zu\n", ft_strlen(k));
	printf("%zu\n", strlen(k));
	return (0);
}*/
