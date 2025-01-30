/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarratt <jbarratt@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:04:01 by jbarratt          #+#    #+#             */
/*   Updated: 2024/11/13 15:23:27 by jbarratt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - ('a' - 'A'));
	return (c);
}

/*
#include <stdio.h>
int main(void)
{
	char b[256] = "A short but l!!^!#&&* sentence.";
	char *a = b;
	for(a;*a;a++)
		printf("%c", ft_toupper(*a));
	printf("\n");
	return (0);
}
*/
