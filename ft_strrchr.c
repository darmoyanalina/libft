/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adarmoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 12:01:16 by adarmoya          #+#    #+#             */
/*   Updated: 2026/02/02 12:12:27 by adarmoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	l;

	i = ft_strlen(s);
	l = (unsigned char)c;
	while (i)
	{
		if (s[i] == l)
			return ((char *)&s[i]);
		i--;
	}
	if (s[i] == l)
		return ((char *)&s[i]);
	return (NULL);
}
/*
int	main(void)
{
	printf("%s\n", ft_strrchr("Hello!", 'l'));
	return (0);
}*/
