/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:32:17 by iel-moha          #+#    #+#             */
/*   Updated: 2021/11/08 14:53:17 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *p1;
	unsigned char *p2;
	size_t i;

	i = 0;
	p1 = (unsigned char*) s1;
	p2 = (unsigned char*) s2;
	if (n == 0)
		return (0);
	while (p1[i] != '\0' && p2[i] != '\0' && i < n - 1 && p1[i] == p2[i])
	{
		i++;
	}
	return (p1[i] - p2[i]);
}/*
int main()
{
	char *p1 = "";
	char *p2 = "";
	printf("%d\n", memcmp(p1,p2,2));
	printf("%d\n", ft_memcmp(p1,p2,2));
}*/
