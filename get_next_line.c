/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarratt <jbarratt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 14:15:28 by jbarratt          #+#    #+#             */
/*   Updated: 2025/01/30 10:01:37 by jbarratt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

ssize_t	create_list(t_node **head, int fd)
{
	ssize_t	size;
	ssize_t	size_rest;

	if (!*head)
		return (add_node(head, fd));
	size = seek_nl(*head) + 1;
	if (size)
		return (size);
	else
		size = (*head)->size;
	size_rest = add_node(&(*head)->next, fd);
	if (size_rest < 0)
	{
		free(*head);
		*head = NULL;
		return (size_rest);
	}
	return (size + size_rest);
}

t_node	*consume_list(t_node *head, char *str)
{
	t_node	*tail;
	size_t	i;

	i = 0;
	while (i < head->size && head->buf[i] != '\n')
	{
		str[i] = head->buf[i];
		i++;
	}
	if (!head->next)
	{
		str[i] = '\n';
		shift_left(head, seek_nl(head) + 1);
		return (head);
	}
	tail = consume_list(head->next, str + i);
	free(head);
	return (tail);
}

char	*get_next_line(int fd)
{
	static t_node	*head[MAX_OPEN_FILES + 3];
	ssize_t			size;
	char			*str;

	size = create_list(&head[fd], fd);
	if (size == 0)
		free_node(&head[fd]);
	if (size <= 0)
		return (NULL);
	str = malloc(size + 1);
	if (!str)
	{
		free_node(&head[fd]);
		return (NULL);
	}
	head[fd] = consume_list(head[fd], str);
	str[size] = '\0';
	return (str);
}
