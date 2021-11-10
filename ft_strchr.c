/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <iel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 21:05:42 by iel-moha          #+#    #+#             */
/*   Updated: 2021/11/10 14:12:43 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	unsigned char *ret;
	int i;

	i = 0;
	ret = (unsigned char *)s;
	while(ret[i])
	{
		if(ret[i] == (unsigned char)c)
		{
			return ((char*)&ret[i]);
		}
		i++;
	}
	if(ret[i] == c)
		return((char*)&ret[i]);
	return (0);
}/*

int main()
{
	char *s ="ahmed";


	printf("%s\n", ft_strchr(s,'z'));
	printf("%s\n", strchr(s,'z'));

return (0);	
}*/
