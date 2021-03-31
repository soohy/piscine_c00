/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohkim <soohkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 13:10:39 by soohkim           #+#    #+#             */
/*   Updated: 2021/04/01 05:33:57 by soohkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void 

void	ft_print_combn(int n)
{

	int i;
	int j;
	int k;
	num[10];

	i = 0;
	j = 0;
	k = n;
	num[0] = 0;
	while (i < k)
	{
		while (num[j] <= 10 - k)
		{
			num[j]++;
			j++;
			num[j + 1] = num[j] + 1;
		}
		k--;
	}

	char num[n];
	char separator[2];

	separator[0] = ',';
	separator[1] = ' ';
	if (0 <= n && n <= 9)
	{
		ft_putchar(48 + n);
		write(1, &separator, 2);
	}
	else
	{
		print
	}
}
