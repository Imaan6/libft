/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:02:40 by iel-moha          #+#    #+#             */
/*   Updated: 2021/11/20 23:31:31 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (len == 0 && !haystack && needle)
		return (NULL);
	i = 0;
	if (!ft_strncmp(haystack, "", ft_strlen(haystack))
		&& !ft_strncmp(needle, "", ft_strlen(needle)))
		return ("");
	if(!ft_strncmp(needle, "", ft_strlen(needle)))
		return ((char *)haystack);
/*	if (haystack == NULL)
	{
		return (NULL);
	}*/
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] != '\0'
			&& haystack[i + j] == needle[j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)(&haystack[i]));
		j++;
		}
		i++;
	}
	return (NULL);
}
/*
int main()
{
	char *haystack = "oh no not the empty string !";
	char *needle = "";

	printf("|%s|\n",ft_strnstr(NULL, needle, 0));
	//printf("|%s|\n",strnstr(NULL, needle, 0));
}
*/
