/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adarmoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 12:11:44 by adarmoya          #+#    #+#             */
/*   Updated: 2026/02/07 13:57:07 by adarmoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	ss1;
	size_t	ss2;

	if (!s1 || !s2)
		return (NULL);
	ss1 = ft_strlen(s1);
	ss2 = ft_strlen(s2);
	s = malloc(ss1 + ss2 + 1);
	if (!s)
		return (NULL);
	s[0] = '\0';
	ft_strlcat(s, s1, ss1 + 1);
	ft_strlcat(s, s2, ss1 + ss2 + 1);
	return (s);
}
/*
int	main(void)
{
	printf("%s\n", ft_strjoin("Hello", " World"));
	return (0);
}*/
