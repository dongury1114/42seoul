/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggyle <donggyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:52:26 by donggyle          #+#    #+#             */
/*   Updated: 2021/10/16 18:05:06 by donggyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b < 100)
		{
			if (a < b)
			{
				ft_putchar(a / 10 + '0');
				ft_putchar(a % 10 + '0');
				write(1, " ", 1);
				ft_putchar(b / 10 + '0');
				ft_putchar(b % 10 + '0');
				write(1, ", ", 2);
			}
		}
		b++;
	}
	a++;
}
