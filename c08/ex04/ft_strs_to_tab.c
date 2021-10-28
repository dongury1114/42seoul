/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggyle <donggyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 22:57:30 by donggyle          #+#    #+#             */
/*   Updated: 2021/10/28 10:43:42 by donggyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*dest;

	i = 0;
	len = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * len + 1);
	if (dest == NULL)
		return (0);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*arr;

	(void)ac;
	i = 0;
	arr = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (arr == NULL)
		return (NULL);
	while (i < ac)
	{
		arr[i].size = ft_strlen(av[i]);
		arr[i].copy = ft_strdup(av[i]);
		arr[i].str = av[i];
		i++;
	}
	arr[i] = (struct s_stock_str){0, 0, 0};
	return (arr);
}