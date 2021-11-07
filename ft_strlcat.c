/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <iel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 13:11:54 by iel-moha          #+#    #+#             */
/*   Updated: 2021/11/07 12:28:42 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	ft_strlcat(char *  dst, const char *  src, size_t fdstsize)
{
	size_t	i;
	size_t	src_size;
	size_t	dst_size;

	src_size = ft_strlen(src);
	dst_size = ft_strlen(dst);
	if (fdstsize == 0)
	{
		return (src_size);
	}
	i = 0;
	while (src[i] != '\0' && i + dst_size < (fdstsize - 1))
	{
		dst[i + dst_size] = src[i];
		i++;
	}
	dst[i + dst_size] = '\0';
	return (src_size + fdstsize);
}/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int	main()
{
	char txt1[60] = "imane ";
	char txt2[] = "fiha n3ass";
	printf ("%lu\n%s", ft_strlcat(txt1, txt2, 0), txt1);
		return 0;
}*/
