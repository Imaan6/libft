/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 07:37:41 by iel-moha          #+#    #+#             */
/*   Updated: 2021/11/28 18:09:09 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	*change(void *data)
{
	data = strdup("changed");
	return data;
}

void	del(void *content)
{
	free(content);
}*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list	*curr;
	t_list	*new;
	t_list	*var;

	new = NULL;
	curr = lst;
	while(curr)
	{
		var = ft_lstnew((*f)(curr->content));
		if(!var)
		{
			ft_lstclear(&var, del);
			return NULL;
		}
		ft_lstadd_back(&new, var);
		curr = curr->next;
	}
	return (new);
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
	display(ft_lstmap(head, change, del));
	//display(head);
}*/
