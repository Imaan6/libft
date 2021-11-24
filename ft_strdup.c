/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <iel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 21:07:23 by iel-moha          #+#    #+#             */
/*   Updated: 2021/11/24 22:23:11 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *s1)
{
	char	*dup;
	int		i;

	i = 0;
	while (s1[i])
		i++;
	dup = malloc((i + 1) * sizeof (char));
	if (dup == 0)
		return (0);
	dup[i] = '\0';
	while (i >= 0)
	{
		dup[i] = s1[i];
		i--;
	}
	return (dup);
}
