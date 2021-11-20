/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <iel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 13:11:54 by iel-moha          #+#    #+#             */
/*   Updated: 2021/11/20 23:19:12 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t fdstsize)
{
	size_t	i;
	size_t	src_len;
	size_t	dst_len;

	src_len = ft_strlen(src);
	if (fdstsize == 0)
		return (src_len);
	dst_len = ft_strlen(dst);
	i = 0;
	while (src[i] != '\0' && i + dst_len < (fdstsize - 1))
	{
		dst[i + dst_len] = src[i];
		i++;
	}
	dst[i + dst_len] = '\0';
	if (dst_len < fdstsize)
		return (src_len + dst_len);
	else
		return (src_len + fdstsize);
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int	main()
{
	char txt1[] = "imane ";
	char txt2[] = "fiha n3ass";
	printf ("%lu", ft_strlcat(NULL, "ggg",0));
		return (0);
}
