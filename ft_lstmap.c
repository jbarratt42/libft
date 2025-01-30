/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarratt <jbarratt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:31:01 by jbarratt          #+#    #+#             */
/*   Updated: 2024/11/18 11:55:15 by jbarratt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static t_list	*new_node(void *content, void *(*f)(void *),
		void (*del)(void *))
{
	void	*content1;
	t_list	*new;

	content1 = f(content);
	new = ft_lstnew(content1);
	if (!new)
	{
		del(content1);
		return (0);
	}
	return (new);
}

static void	clean_up(t_list *lst, void (*del)(void *))
{
	t_list	*last;

	del(lst->content);
	while (lst->next)
	{
		last = lst;
		lst = lst->next;
		free(last);
		del(lst->content);
	}
	free(lst);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst1;
	t_list	*node;
	t_list	*node1;

	if (!lst)
		return (0);
	node = lst;
	lst1 = new_node(node->content, f, del);
	if (!lst1)
		return (0);
	node1 = lst1;
	while (node->next)
	{
		node1->next = new_node(node->next->content, f, del);
		if (!node1->next)
		{
			clean_up(lst1, del);
			return (0);
		}
		node = node->next;
		node1 = node1->next;
	}
	return (lst1);
}
