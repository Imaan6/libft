/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <iel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 07:29:38 by iel-moha          #+#    #+#             */
/*   Updated: 2021/11/28 21:05:07 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	del(void *content)
{
	free(content);
}*/

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst || del)
		(*del)(lst->content);
	free(lst);
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
	ft_lstdelone(new3, del);
	ft_lstdelone(new2, del);
	ft_lstdelone(new1, del);
	display(head);
}*/
