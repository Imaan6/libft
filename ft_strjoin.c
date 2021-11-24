/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 00:03:51 by iel-moha          #+#    #+#             */
/*   Updated: 2021/11/24 21:05:17 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	new = (char *) malloc ((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char));
	if (!new)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s1))
	{
		new[i] = (char)s1[i];
		i++;
	}
	j = 0;
	while (i < (ft_strlen(s1) + ft_strlen(s2)))
	{
		new[i] = (char)s2[j];
		i++;
		j++;
	}
	new[i] = '\0';
	return (new);
}
/*
int main()
{
	char *s1 = "";
	char *s2 = "";
	printf("%s", ft_strjoin(s1, s2));
}*/
