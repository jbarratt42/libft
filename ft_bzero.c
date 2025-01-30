/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarratt <jbarratt@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:07:50 by jbarratt          #+#    #+#             */
/*   Updated: 2024/11/13 13:25:05 by jbarratt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
		((char *)s)[i++] = 0;
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
	ft_bzero(n0, 5*sizeof(int));
	printf("ft_bzero: ");
	for(i = 0; i < 5; i++)
		printf("%d ", n0[i]);
	printf("\n");
	bzero(n1, 5*sizeof(int));
	printf("bzero:    ");
	for(i = 0; i < 5; i++)
		printf("%d ", n1[i]);
	printf("\n");

	printf("long:\n");
	printf("before:    ");
	for(i = 0; i < 5; i++)
		printf("%ld ", m0[i]);
	printf("\n");
	ft_bzero(m0, 5*sizeof(long));
	printf("ft_bzero: ");
	for(i = 0; i < 5; i++)
		printf("%ld ", m0[i]);
	printf("\n");
	bzero(m1, 5*sizeof(long));
	printf("bzero:    ");
	for(i = 0; i < 5; i++)
		printf("%ld ", m1[i]);
	printf("\n");
	return (0);
}
*/
