/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <iel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 11:26:57 by iel-moha          #+#    #+#             */
/*   Updated: 2021/11/29 10:34:56 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	del(void *data)
{
	free(data);
}*/

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*curr;

	if ((*lst) || del)
	{
		while (*lst)
		{
			curr = (*lst)->next;
			(*del)((*lst)->content);
			free(*lst);
			(*lst) = curr;
		}
		(*lst) = NULL;
	}
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
	printf("\n");
	ft_lstclear(&new2, free);
	display(new3);
}*/
