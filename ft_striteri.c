/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adarmoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 15:15:59 by adarmoya          #+#    #+#             */
/*   Updated: 2026/02/09 15:36:38 by adarmoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

/*void    func(unsigned int i, char *c)
{
    if (!(i % 2))
        (*c)++;
}*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;
	size_t			size;

	i = 0;
	size = ft_strlen(s);
	while (i < size)
	{
		f(i, &s[i]);
		i++;
	}
}
/*
int	main(void)
{
    char s[] = "abcdef";
    ft_striteri(s, func);
	printf("%s\n", s);
	return (0);
}*/