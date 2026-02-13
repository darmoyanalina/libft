/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adarmoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 12:09:38 by adarmoya          #+#    #+#             */
/*   Updated: 2026/02/07 13:53:57 by adarmoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	slen;

	if (!s)
		return (NULL);
	i = 0;
	slen = ft_strlen(s);
	if (start >= slen)
		len = 0;
	if (len && slen < start + len)
		len = slen - start;
	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	while (i < len)
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}
/*
int	main(void)
{
	printf("%s\n", ft_substr("Hello World!", 3, 8));
	return (0);
}*/
