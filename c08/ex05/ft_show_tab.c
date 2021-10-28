/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggyle <donggyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 22:57:26 by donggyle          #+#    #+#             */
/*   Updated: 2021/10/28 10:42:26 by donggyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"


void	ft_put_string(char *str)
{
	while (str)
	{
		write(1, &str, 1);
		str++;
	}
}

void	ft_put_number(int num)
{
	if (num > 9)
		ft_put_number(num / 10);
	write(1, &"0123456789"[num % 10], 1);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_put_string(par[i].str);
		ft_put_string("\n");
		ft_put_number(par[i].size);
		ft_put_string("\n");
		ft_put_string(par[i].copy);
		ft_put_string("\n");
		i++;
	}
}
