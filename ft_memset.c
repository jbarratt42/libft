/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarratt <jbarratt@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:42:47 by jbarratt          #+#    #+#             */
/*   Updated: 2024/11/13 13:22:46 by jbarratt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = c;
		i++;
	}
	return (s);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int i;
	int	n0[] = { 1, 2, 3, 4, 5 };
	int	n1[] = { 1, 2, 3, 4, 5 };
	long m0[] = { 1, 2, 3 , 4, 5 };
	long m1[] = { 1, 2, 3 , 4, 5 };

	printf("int:\n");
	printf("before:    ");
	for(i = 0; i < 5; i++)
		printf("%d ", n0[i]);
	printf("\n");
	ft_memset(n0, 0, 5*sizeof(int));
	printf("ft_memset: ");
	for(i = 0; i < 5; i++)
		printf("%d ", n0[i]);
	printf("\n");
	memset(n1, 0, 5*sizeof(int));
	printf("memset:    ");
	for(i = 0; i < 5; i++)
		printf("%d ", n1[i]);
	printf("\n");

	printf("long:\n");
	printf("before:    ");
	for(i = 0; i < 5; i++)
		printf("%ld ", m0[i]);
	printf("\n");
	ft_memset(m0, 0, 5*sizeof(long));
	printf("ft_memset: ");
	for(i = 0; i < 5; i++)
		printf("%ld ", m0[i]);
	printf("\n");
	memset(m1, 0, 5*sizeof(long));
	printf("memset:    ");
	for(i = 0; i < 5; i++)
		printf("%ld ", m1[i]);
	printf("\n");
	return (0);
}
*/
