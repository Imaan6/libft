/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <iel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 12:15:25 by iel-moha          #+#    #+#             */
/*   Updated: 2021/11/07 12:17:52 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_isalnum(int c)
{
	if((c > 47 && c < 58) || (c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
