/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <iel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 20:45:16 by iel-moha          #+#    #+#             */
/*   Updated: 2021/11/07 12:18:51 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
int	ft_tolower(int c)
{
	if(c > 64 &&  c < 91)
	{
		c += 32;
		return (c);
	}
	else
		return (c);
}
/*
int main()
{
	int c = 'w';
	printf("%d\n", ft_tolower(c));
	printf("%d\n", tolower(c));
}*/
