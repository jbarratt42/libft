/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarratt <jbarratt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:52:37 by jbarratt          #+#    #+#             */
/*   Updated: 2024/11/18 10:07:58 by jbarratt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void	clear_recursive(t_list *lst, void (*del)(void*))
{
	if (lst->next)
		clear_recursive(lst->next, del);
	del(lst->content);
	free(lst->next);
}

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (!*lst)
		return ;
	clear_recursive(*lst, del);
	free(*lst);
	*lst = 0;
}
