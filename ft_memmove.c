/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <iel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 11:53:55 by iel-moha          #+#    #+#             */
/*   Updated: 2021/11/07 12:27:37 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	
	d = (unsigned char*) dst;
	s = (unsigned char*) src;
	if (len == 0)
		return (dst);
	else if(src > dst)
	{
		while(len > 0)
		{
			*d++ = *s++;
			len--;
		}
	}
	else
	{
		s += len;
		d += len;
		while(len>0)
		{
			*d-- = *s--;
			len--;
		}
	}
	return (dst);
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
