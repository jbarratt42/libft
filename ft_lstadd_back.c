/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarratt <jbarratt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:10:24 by jbarratt          #+#    #+#             */
/*   Updated: 2024/11/18 09:51:47 by jbarratt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lst1;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	lst1 = *lst;
	{
		while (lst1->next)
			lst1 = lst1->next;
		lst1->next = new;
	}
}
