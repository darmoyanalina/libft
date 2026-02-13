/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adarmoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 14:28:30 by adarmoya          #+#    #+#             */
/*   Updated: 2026/02/02 12:00:05 by adarmoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	l;

	i = 0;
	l = (unsigned char)c;
	while (s[i])
	{
		if (s[i] == l)
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
/*
int	main(void)
{
	printf("%s\n", ft_strchr("Hello", 'l'));
	return (0);
}*/
