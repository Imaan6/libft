/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 22:41:32 by iel-moha          #+#    #+#             */
/*   Updated: 2021/11/19 17:08:12 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
char	*ft_substr(char const *s, unsigned int start,size_t len)
{
	char *sub_s;
	size_t	i;
	
	if (!s)
		return (NULL);
	if(start >= ft_strlen(s))
		return (ft_strdup(""));
	sub_s = (char *)malloc((len + 1) * sizeof(char));
	if(!sub_s)
		return (NULL);
	i = 0;
	while(i < len)
	{
		sub_s[i] = (char)s[start];
		i++;
		start++;
	}
	sub_s[i] = '\0';
	return (sub_s);
}
/*
int main()
{
	char *s = "belle";
	printf("%s", ft_substr(s, 5, 5));
}*/
