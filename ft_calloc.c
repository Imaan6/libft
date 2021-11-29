/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <iel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:19:38 by iel-moha          #+#    #+#             */
/*   Updated: 2021/11/28 21:26:26 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = malloc(count * size);
	if (p != NULL)
	{
		ft_bzero(p, count * size);
	}
	return (p);
}
/*
int main()
{
	char *p;
	char *c;
	p = ft_calloc(2,sizeof(char));
	c = calloc(2, sizeof(char));
	p = "imane";
	c = "imane";
	printf("%s\n",p);
	printf("%s\n",c);
	
}*/
