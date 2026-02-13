/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adarmoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 15:07:50 by adarmoya          #+#    #+#             */
/*   Updated: 2026/01/28 16:37:31 by adarmoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_isalnum(3));
	printf("%d\n", ft_isalnum('3'));
	printf("%d\n", ft_isalnum('D'));
	return (0);
}*/
