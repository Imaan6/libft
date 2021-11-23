/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 21:32:29 by iel-moha          #+#    #+#             */
/*   Updated: 2021/11/22 15:15:05 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s != NULL)
		while (s[i])
		{
			write(fd, &s[i], 1);
			i++;
		}
}
/*
int main()
{
	char *s = "Sysiphus";
	int fd;

	fd = open("sample.txt", O_WRONLY | O_APPEND);
	ft_putstr_fd(s, fd);
	close(fd);
}*/
