/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:12:34 by iel-moha          #+#    #+#             */
/*   Updated: 2021/11/21 15:33:58 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int wordcount(char *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	if(s[0] != c)
		count++;
	while(s[i])
	{
		if(s[i] == c && s[i+1] != c && s[i + 1] != '\0')
			count++;
		i++;
	}
	return (count);
}

int	charcount(char const *s, char c, int i)
{
	int	j;
	int	count;

	j = i;
	count = 0;
	while(s[j] != '\0' && s[j] == c)
		j++;
	while(s[j] && s[j] != c)
	{
		j++;
		count++;
	}
	return (count);
}

char **ft_split(char const *s, char c)
{
	int	i;
	int	j;
	int	k;
	char	**new;
	int	count;
	int count1;

	count1 = wordcount((char *)s, c);
	new = malloc ((count1+1) * sizeof(char*));
	j = 0;
	k = 0;
	while(j < count1)
	{
		i = 0;
		while(s[k])
		{
			count = charcount(s, c, k);
			new[j] = malloc((count + 1)  * sizeof(char));
			while(s[k] != '\0' && s[k] == c)
				k++;
			while (count > 0)
			{
				new[j][i] = s[k];
				i++;
				k++;
				count--;
			}
			if(s[k] == c)
				break;
		}
		new[j][i] = '\0';
		j++;
	}
	new[j] = NULL;
	return (new);
}
/*
int main()
{
	char	s[] = "+im+imane++++hey+you+++";
	char	**f;
	char	c = '+';
	int i;
	i = 0;
	f = ft_split(s, c);
	while(f[i])
	{
		printf("|%s|\n", f[i]);
		i++;
	}
	printf("%s\n", f[i]);
}*/
