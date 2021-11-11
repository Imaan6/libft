/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:19:38 by iel-moha          #+#    #+#             */
/*   Updated: 2021/11/11 17:53:19 by iel-moha         ###   ########.fr       */
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
