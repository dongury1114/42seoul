/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seseo <seseo@student.42eoul.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 10:00:40 by seseo             #+#    #+#             */
/*   Updated: 2021/10/09 21:08:30 by seseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

char	d_char(int x_s, int y_s, int x, int y)
{
	if ((x_s == 1 || x_s == x) && y_s == 1)
	{
		return ('A');
	}
	else if ((x_s == 1 || x_s == x) && y_s == y)
	{
		return ('C');
	}
	else if (x_s == 1 || x_s == x || y_s == 1 || y_s == y)
	{
		return ('B');
	}
	else
	{
		return (' ');
	}	
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
		{
			ft_putchar(d_char(x_s, y_s, x, y));
		}	
		ft_putchar('\n');
	}
}
