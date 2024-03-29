/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:02:56 by iel-moha          #+#    #+#             */
/*   Updated: 2021/11/19 16:13:25 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n > 0)
	{
		if (*p == (unsigned char )c)
			return (p);
		p++;
		n--;
	}
	return (NULL);
}
/*
int main()
{
	char *s = "imanae";
	int c = 'a';

	printf("%s\n",ft_memchr(((void *)0), '\0', 0x20));

	//printf("%s\n", memchr(((void *)0), '\0', 0x20));
}
*/
