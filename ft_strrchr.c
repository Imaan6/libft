/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <iel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 10:54:22 by iel-moha          #+#    #+#             */
/*   Updated: 2021/11/07 14:32:05 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strrchr(const char *s, int c)
{
	char *ret;

	ret = NULL;
	while(*s)
	{
		if(*s == c)
		{
			ret = (char*) s;
			s++;
		}
		else
			s++;
	}
	return (ret);
}
int main()
{
	char *s = "Chlat";
	int c = 'o';

	printf("%s\n", ft_strrchr(s, c));
	printf("%s\n", strrchr(s, c));
}
