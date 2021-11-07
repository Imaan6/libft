/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <iel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 21:05:42 by iel-moha          #+#    #+#             */
/*   Updated: 2021/11/07 14:55:34 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strchr(const char *s, int c)
{
	char *ret;

	ret = NULL;
	while(s)
	{
		if(*s == c)
		{
			ret = (char *)s;
			return (ret);
		}
		s++;
	}
	return (ret);
}
int main()
{
	char *s = "nji";
	int c = 'a';

	printf("%s\n", ft_strchr(s, c));
	printf("%s\n", strchr(s, c));
}
