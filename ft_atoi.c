/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarratt <jbarratt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:21:45 by jbarratt          #+#    #+#             */
/*   Updated: 2024/11/15 10:46:29 by jbarratt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	char	*n;
	int		neg;
	int		val;

	neg = 0;
	val = 0;
	n = (char *)nptr;
	while (*n == ' ' || (*n >= 9 && *n <= 13))
		n++;
	if (*n == '-')
	{
		neg = 1;
		n++;
	}
	else if (*n == '+')
		n++;
	while (*n <= '9' && *n >= '0')
	{
		val = 10 * val + *n - '0';
		n++;
	}
	if (neg)
		val = -val;
	return (val);
}
