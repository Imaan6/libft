/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <iel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 06:45:17 by iel-moha          #+#    #+#             */
/*   Updated: 2021/11/28 21:03:41 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	first_char(void *data)
{
	((char *)data)[0] = 'z';
}*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
/*
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
	t_list	*new1 = ft_lstnew(ft_strdup("first"));
	t_list	*new2 = ft_lstnew(ft_strdup("second"));
	t_list	*new3 = ft_lstnew(ft_strdup("third"));
	t_list	*new4 = ft_lstnew(ft_strdup("fourth"));
	ft_lstadd_front(&head, new1);
	ft_lstadd_front(&head, new2);
	ft_lstadd_front(&head, new3);
	ft_lstadd_front(&head, new4);
	display(head);
	ft_lstiter(head, first_char);
	display(head);
}*/
