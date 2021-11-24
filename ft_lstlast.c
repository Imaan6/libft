/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:09:22 by iel-moha          #+#    #+#             */
/*   Updated: 2021/11/24 15:33:26 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	t_list	*current;

	current = lst;
	if(current == NULL)
		return (NULL);
	while (current->next)
	{
		current = current->next;
	}
	return (current);
}
/*void display(t_list *lst)
{
	t_list *curr = lst;
	while (curr)
	{
		printf("%s-->", curr->content);
		curr = curr->next;
	}
	printf("NULL");
}*/
/*int main()
{
	t_list	*head= NULL;
	t_list	*new1 = ft_lstnew("first");
	t_list	*new2 = ft_lstnew("second");
	t_list	*new3 = ft_lstnew("third");
	t_list	*new4 = ft_lstnew("fourth");
	ft_lstadd_front(&head, new1);
	ft_lstadd_front(&head, new2);
	ft_lstadd_front(&head, new3);
	ft_lstadd_front(&head, new4);
//	display(new4);
	t_list	*ptr;
	ptr = ft_lstlast(head);
	printf("%s", (char *)ptr->content);
}*/
