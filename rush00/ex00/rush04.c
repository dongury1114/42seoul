/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seseo <seseo@student.42eoul.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 14:46:56 by seseo             #+#    #+#             */
/*   Updated: 2021/10/09 18:55:55 by seseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

char	d_char(int x_s, int y_s, int x, int y)
{
	if (y_s == 1)
	{
		if (x_s == 1)
			return ('A');
		else if (x_s == x)
			return ('C');
		else
			return ('B');
	}
	else if (y_s == y)
	{
		if (x_s == 1)
			return ('C');
		else if (x_s == x)
			return ('A');
		else
			return ('B');
	}
	else
	{
		if (x_s > 1 && x_s < x)
			return (' ');
		else
			return ('B');
	}
}

void	rush(int x, int y)
{
	int	x_s;
	int	y_s;

	x_s = 0;
	y_s = 0;
	while (++y_s <= y)
	{
		while (++x_s <= x)
		{
			ft_putchar(d_char(x_s, y_s, x, y));
		}
		ft_putchar('\n');
		x_s = 0;
	}
}
