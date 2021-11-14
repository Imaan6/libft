/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 18:26:27 by iel-moha          #+#    #+#             */
/*   Updated: 2021/11/14 15:48:02 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_itoa(int n)
{
    char *res;
    int    len;
    long    nb;

    len = 0;
    nb = n;
	if (n == 0)
      return (ft_strdup("0"));
    if (n < 0)
    {
      nb *= -1;
      len++;
    }
      
    while(nb > 0)
    {
        nb /= 10;
        len++;
    }
    res = malloc(len + 1);
	if (!res)
		return (NULL);
    res[len] = '\0';
    len--;
    if (n < 0)
    {
      res[0] = '-';
      n *= -1;
    }
    while(n > 0)
    {
        res[len] = (n % 10) + 48;
        n /= 10;
        len--;
    }
    return (res);
}
/*
int main() {

  printf("%s",ft_itoa(0));
}
*/
