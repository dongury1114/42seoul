/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggyle <donggyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 19:09:53 by donggyle          #+#    #+#             */
/*   Updated: 2021/10/17 21:20:36 by donggyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	tmp;

	a = 1;
	while (a < size)
	{
		b = a;
		tmp = tab[b];
		while (--b >= 0 && tmp < tab[b])
		{
			tab[b + 1] = tab[b];
		}
		tab[b + 1] = tmp;
		a++;
	}
}
