/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <iel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:36:45 by iel-moha          #+#    #+#             */
/*   Updated: 2021/11/23 23:32:58 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// # include <stdio.h>
// # include <stdlib.h>

// typedef struct s_list
// {
// 	void			*content;
// 	struct s_list	*next;
// }	t_list;

// t_list	*ft_lstnew(void *content)
// {
// 	t_list	*head;
// 	t_list	*new;

// 	head = NULL;
// 	new = (t_list*)malloc(sizeof(t_list));
// 	(*new).content = content;
// 	(*new).next = NULL;

// 	return (new);
// }

void ft_lstadd_front(t_list **lst, t_list *new)
{
	(*new).next = *lst;
	*lst = new;
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
	t_list *head = NULL;
	t_list *new = ft_lstnew("Yassine");
	ft_lstadd_front(&head, new);
	display(new);
}*/
