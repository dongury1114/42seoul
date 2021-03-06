/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggyle <donggyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:52:13 by donggyle          #+#    #+#             */
/*   Updated: 2021/10/17 18:46:22 by donggyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	a[5];

	a[0] = '0';
	a[3] = ',';
	a[4] = ' ';
	while (a[0] <= '6')
	{
		a[1] = a[0] + 1;
		while (a[1] <= '8')
		{
			a[2] = a[1] + 1;
			while (a[2] <= '9')
			{
				write(1, a, 5);
				a[2]++;
			}
			a[1]++;
		}
		a[0]++;
	}
	write(1, "789", 3);
}
