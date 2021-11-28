/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <iel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 20:33:56 by iel-moha          #+#    #+#             */
/*   Updated: 2021/11/28 18:39:51 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <limits.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
		return (c);
	}
	else
		return (c);
}

/*int main ()
{
	for (int i = -100; i < 530; i++)
	{
		int x = ft_toupper(i);
		int y = toupper(i);
		if (x != y)
		{
			printf("no, index: %d %d %d \n", i, x, y);
			return (1);
		}
	}	
	
	printf("biggest char : %d\n", SCHAR_MAX);
	printf("biggest int : %d", INT_MAX);
	return (0);
}*/
