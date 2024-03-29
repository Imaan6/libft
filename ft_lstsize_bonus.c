/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <iel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 23:50:37 by iel-moha          #+#    #+#             */
/*   Updated: 2021/11/28 21:01:08 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		counter;
	t_list	*current;

	counter = 0;
	current = lst;
	if (lst)
	{
		while (current)
		{
			current = current->next;
			counter++;
		}
	}
	return (counter);
}
/*int main()
{
	t_list	*head= NULL;
	t_list *new1 = ft_lstnew("first");
	t_list *new2 = ft_lstnew("second");
	t_list *new3 = ft_lstnew("third");
	t_list *new4 = ft_lstnew("fourth");
	ft_lstadd_front(&head, new1);
	ft_lstadd_front(&head, new2);
	ft_lstadd_front(&head, new3);
	ft_lstadd_front(&head, new4);
	printf("%d",ft_lstsize(new4));
}*/
