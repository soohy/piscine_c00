/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soohkim <soohkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 13:10:39 by soohkim           #+#    #+#             */
/*   Updated: 2021/04/03 13:25:48 by soohkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int g_i;
int g_j;
int g_k;
char *g_num;

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	char *separator;

	separator = ", ";
	while (g_i <= n - 1)
	{
		while (g_j <= 9)
		{
			*(g_num + g_i) = g_j;
			if (g_i == n - 1)
			{
				write(1, g_num, n);
				write(1, separator, 2);
				g_j++;
			}
			else
				break ;
		}
		if (g_j != 9)
			g_i++;
		else
		{
			while (g_k < n)
			{
				g_i -= g_k;
				g_k++;
			}
		}
		g_j = g_num[g_i - 1] + 1;
		if (*g_num == (10 - n) && *(g_num + (n - 1)) == 9)
			break ;
	}
}
