/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adarmoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 12:05:47 by adarmoya          #+#    #+#             */
/*   Updated: 2026/02/07 14:00:17 by adarmoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

static int	is_in_set(char s, char const *set)
{
	int	i;

	i = 0;
	while (set[i] && set[i] != s)
		i++;
	return (set[i] == s);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	size_t	i;
	size_t	j;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1);
	while (s1[i] && is_in_set(s1[i], set))
		i++;
	while (j > i && is_in_set(s1[j - 1], set))
		j--;
	s = malloc(j - i + 1);
	if (!s)
		return (NULL);
	ft_strlcpy(s, &s1[i], j - i + 1);
	return (s);
}
/*
int	main(void)
{
	printf("%s\n", ft_strtrim("  , .l Help .,  ll", " ,."));

	return (0);
}*/
