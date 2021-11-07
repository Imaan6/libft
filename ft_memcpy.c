/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <iel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 12:13:46 by iel-moha          #+#    #+#             */
/*   Updated: 2021/11/07 12:14:05 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *d;
	unsigned char *s;
	size_t	i;

	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	i = 0;
	while(i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}/*
int main()
{
	char s[100] = "Geeksfor";
	char d[100];

	printf("%s\n", s);
	memcpy(s+5, s, 5);
	printf("%s\n", s);
}
*/