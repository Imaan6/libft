/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 00:03:51 by iel-moha          #+#    #+#             */
/*   Updated: 2021/11/19 17:34:21 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int	len_s1;
	int	len_s2;
	int	len_new;
	int	i;
	int	j;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	len_new = len_s1 + len_s2;
	new = (char *) malloc (len_new * sizeof(char));
	if (!new)
		return (NULL);
	i = 0;
	while (i < len_s1)
	{
		new[i] = (char)s1[i];
		i++;
	}
	j = 0;
	while (i < len_new)
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
