/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:33:55 by iel-moha          #+#    #+#             */
/*   Updated: 2021/11/24 21:45:55 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	upper(unsigned int i, char *s)
{
	s[i] += i;
}*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s != NULL && f != NULL)
	{
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}
/*
int	main()
{
	//char *s = "imane";
	char s[] = "0000000000";
	//s[0] = 'e';
	//printf("%s", s);
	ft_striteri(s, upper);
	printf("%s", s);
	return (0);
}*/
