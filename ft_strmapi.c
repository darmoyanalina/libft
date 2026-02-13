/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adarmoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 15:01:14 by adarmoya          #+#    #+#             */
/*   Updated: 2026/02/09 15:07:30 by adarmoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	size_t				size;
	char				*str;

	size = ft_strlen(s);
	i = 0;
	str = malloc(size + 1);
	if (!str)
		return (NULL);
	while (i < size)
	{
		str[i] = f(i, (char)s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int	main(void)
{
	printf("%s\n", ft_strmapi("abcdef", *func));
	return (0);
}*/
