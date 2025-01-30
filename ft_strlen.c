/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarratt <jbarratt@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:44:18 by jbarratt          #+#    #+#             */
/*   Updated: 2024/11/20 15:20:15 by jbarratt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}

/*
#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	int	i;
	char *s[256] = { "aardvark", "hello", "a string with spaces." };
	
	if (argc == 1)
		for (i=0;i<3;i++)
		{
			printf("%4lu %4lu %s\n", strlen(s[i]), ft_strlen(s[i]), s[i]);
			if (strlen(s[i]) != ft_strlen(s[i]))
				return (1);
		}
	else
	{
		printf("%s\n%4lu %4lu\n", argv[1], strlen(argv[1]), ft_strlen(argv[1]));
		if (strlen(argv[1]) != ft_strlen(argv[1]))
		return (1);
	}
	return (0);
}
*/
