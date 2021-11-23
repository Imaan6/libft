/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 00:23:02 by iel-moha          #+#    #+#             */
/*   Updated: 2021/11/22 20:07:31 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	setchecker(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	if (!s1)
		return (NULL);
	while (setchecker(set, s1[i]) && s1)
		i++;
	j = ft_strlen(s1) - 1;
	while (setchecker(set, s1[j]))
		j--;
	return (ft_substr(s1, i, (j - i + 1)));
}
/*
int main()
{
	char *s1 = "+++--++M+-y nam++-e is+ Imane++-++";
	char *set = "+-";
	printf("%s", ft_strtrim(s1, set));
}*/
