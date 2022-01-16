/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggyle <donggyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 20:13:51 by donggyle          #+#    #+#             */
/*   Updated: 2021/10/17 23:06:59 by donggyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	tmp;

	a = 0;
	b = size - 1;
	while (a <= b)
	{
		tmp = tab[a];
		tab[a] = tab[b];
		tab[b] = tab[a];
		a++;
		b--;
	}
}
