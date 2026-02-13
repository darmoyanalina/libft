/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adarmoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 16:56:05 by adarmoya          #+#    #+#             */
/*   Updated: 2026/02/09 16:59:01 by adarmoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	size;

	size = ft_strlen(s);
	write(fd, s, size);
}
/*
int	main(void)
{
	ft_putstr_fd("hello s", 1);
	return (0);
}*/
