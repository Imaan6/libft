/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:08:12 by iel-moha          #+#    #+#             */
/*   Updated: 2021/11/24 18:58:18 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list current;

	current = **lst;
	while(current->next)
	{
		current = current->next;
	}
	current->next = new;
}
void display(t_list *lst)
{
	t_list *curr = lst;
	while (curr)
	{
		printf("%s-->", curr->content);
		curr = curr->next;
	}
	printf("NULL");
}
int main()
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
	t_list	this = ft_lstnew("Im at the last pos");
	ft_lstadd_back(&head, this);
	display(head);
/*	t_list	*ptr;
	ptr = ft_lstlast(head);
	printf("%s", (char *)ptr->content);*/
}
