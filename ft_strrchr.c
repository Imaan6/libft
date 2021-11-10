/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <iel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 10:54:22 by iel-moha          #+#    #+#             */
/*   Updated: 2021/11/10 14:32:07 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strrchr(const char *s, int c)
{
	char *ret;

	ret = NULL;
	while(*s)
	{
		if(*s == (char)c)
		{
			ret = (char*) s;
			s++;
		}
		else
			s++;
	}
	if(*s == c)
		return (char*)(s);
	return (ret);
}
/*int main()
{
	char *s = "pChocolat";
	int c = 'p';

	printf("%s\n", ft_strrchr(s, c + 256));
	printf("%s\n", strrchr(s, c + 256));
}*/
