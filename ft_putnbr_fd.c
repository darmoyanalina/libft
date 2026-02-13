/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adarmoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 17:08:40 by adarmoya          #+#    #+#             */
/*   Updated: 2026/02/09 17:34:24 by adarmoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	c = n % 10 + '0';
	write(fd, &c, 1);
}
/*
int	main(void)
{
	ft_putnbr_fd(457, 1);
    write(1, "\n", 1);
	ft_putnbr_fd(0, 1);
    write(1, "\n", 1);
	ft_putnbr_fd(-2457, 1);
    write(1, "\n", 1);
	ft_putnbr_fd(-2147483648, 1);
    write(1, "\n", 1);
	ft_putnbr_fd(500, 1);
    write(1, "\n", 1);
	return (0);
}*/
