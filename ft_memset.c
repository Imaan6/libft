/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <iel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 12:12:38 by iel-moha          #+#    #+#             */
/*   Updated: 2021/11/11 17:07:33 by iel-moha         ###   ########.fr       */
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
int main()
{
	char str[] = "Rania";
	printf("%s\n" , str);
	ft_memset(&str[1], '$', 2);
	printf("%s\n" , str);
}*/
