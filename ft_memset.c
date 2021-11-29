/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <iel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 12:12:38 by iel-moha          #+#    #+#             */
/*   Updated: 2021/11/28 22:15:56 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *)b;
	while (len > 0)
	{
		*p = (unsigned char) c;
		p++;
		len--;
	}
	return (b);
}
/*
int	main(void)
{
	int	s[] = {0, 1, 2, 3, 4};
	int	c = 2;
	ft_memset(s, c, 1);
	 int i = 0;
	
	 while(i < 5) 
	 {
	 	printf("%d\n", s[i]);
	 	i++;
	 }
}*/