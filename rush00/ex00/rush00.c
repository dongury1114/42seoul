/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seseo <seseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 15:35:32 by seseo             #+#    #+#             */
/*   Updated: 2021/10/10 16:14:59 by seseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

char	d_char(int x_s, int y_s, int x, int y)
{
	if ((x_s == 1 || x_s == x) && (y_s == 1 || y_s == y))
		return ('o');
	else if ((x_s != 1 && x_s != x) && (y_s == 1 || y_s == y))
		return ('-');
	else if ((x_s == 1 || x_s == x) && (y_s != 1 && y_s != y))
		return ('|');
	else
		return (' ');
}

void	rush(int x, int y)
{
	int	x_s;
	int	y_s;

	y_s = 0;
	while (++y_s <= y)
	{
		x_s = 0;
		while (++x_s <= x)
			ft_putchar(d_char(x_s, y_s, x, y));
		ft_putchar('\n');
	}
}
