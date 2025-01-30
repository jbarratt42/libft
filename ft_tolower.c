/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarratt <jbarratt@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:04:01 by jbarratt          #+#    #+#             */
/*   Updated: 2024/11/13 15:23:51 by jbarratt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}

/*
#include <stdio.h>
int main(void)
{
	char b[256] = "A short but l!!^!#&&* sentence. YAY!";
	char *a = b;
	for(a;*a;a++)
		printf("%c", ft_tolower(*a));
	printf("\n");
	return (0);
}
*/
