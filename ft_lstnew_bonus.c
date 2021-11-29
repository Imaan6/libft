/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-moha <iel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:04:06 by iel-moha          #+#    #+#             */
/*   Updated: 2021/11/28 22:43:17 by iel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//t_list	*head;

t_list	*ft_lstnew(void *content)
{
	t_list	*head;
	t_list	*new;

	head = NULL;
	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	(*new).content = content;
	(*new).next = NULL;
	return (new);
}
/*void display(t_list *lst)
{
	t_list *curr = lst;
	int *i = curr->content;
	while (curr)
	{
		printf("%d", *i);
		curr = curr->next;
	}
}

int	main()
{
	t_list	*temp;
	int con = 555;

	temp = ft_lstnew(&con);
	//while(temp != NULL)
	//{
	//	printf("%d", (int)temp->content);
	//	temp = temp->next;
	//}
	display(temp);
}*/
