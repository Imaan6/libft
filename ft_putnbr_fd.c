/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 21:54:39 by iel-moha          #+#    #+#             */
/*   Updated: 2021/11/16 22:40:50 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;

	if (n < 0)
	{
		write (fd, "-", 1);
		nb = n * -1;
	}
	else
	{
		nb = n;
	}
	if (nb >= 10)
	{
		ft_putnbr_fd((nb / 10), fd);
		ft_putchar_fd((nb % 10 + 48), fd);
	}
	if (nb < 10)
	{
		ft_putchar_fd((nb + 48), fd);
	}
}
/*
int main()
{
	int n = 42;
	int fd;

	fd = open("sample.txt", O_WRONLY | O_APPEND);
	ft_putnbr_fd(n, fd);
	close(fd);
}*/
