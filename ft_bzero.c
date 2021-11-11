/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <iel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 12:15:54 by iel-moha          #+#    #+#             */
/*   Updated: 2021/11/11 17:09:27 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}
/*
int main()
{
	char s[] = "Imane";
	printf("%s\n", s);
	ft_bzero(&s, 4);
	printf("%s\n", s);
}*/
