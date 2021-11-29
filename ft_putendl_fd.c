/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <iel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 21:55:51 by iel-moha          #+#    #+#             */
/*   Updated: 2021/11/29 10:26:02 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s != NULL)
	{
		while (s[i])
		{
			write(fd, &s[i], 1);
			i++;
		}
	}
	write(fd, "\n", 1);
}
/*
int main()
{
	char	*s= "new string followed by a newline";
	int fd;

	fd = open("sample.txt", O_WRONLY | O_APPEND);
	ft_putendl_fd(s, fd);
	close(fd);
}*/
