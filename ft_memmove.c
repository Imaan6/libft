/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <iel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 11:53:55 by iel-moha          #+#    #+#             */
/*   Updated: 2021/11/22 15:07:30 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t	i;
	size_t	j;
	char	*dst;
	char	*src;

	dst = (char *)s1;
	src = (char *)s2;
	i = 0;
	j = n - 1;
	if (!dst && !src)
		return (dst);
	if (dst > src)
	{
		while (i < j + 1)
		{
			dst[j] = src[j];
			j--;
		}
	}
	else
		ft_memcpy(dst, src, n);
	return (s1);
}
/*int main()
{
	char s[100] = "Geeksfor" ;
	char d[100];

	printf("%s\n", s);
	ft_memmove(s+5, s, 8);
	printf("%s\n", s);
}*/
/*
int main()
{
    char s1[] = "Learningisfun";
    char s2[] = "L1earningisfun";

    memmove(s2 + 5, s1, 8);
    printf("  my %s \n",s1);
    //memmove(s2 + 5, s2, 8);
    //printf("ther %s \n",s2);
}*/
