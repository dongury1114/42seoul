/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggyle <donggyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 18:00:28 by donggyle          #+#    #+#             */
/*   Updated: 2021/10/26 18:15:45 by donggyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	compare(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] == '\0' || str2[i] == '\0')
	{
		if (str1[i] > str2[i])
			return (1);
		else if (str1[i] < str2[i])
			return (0);
		i++;
	}
	return (0);
}

void	bubble(char	**str_arr, int size)
{
	int		t;
	int		i;
	char	*tmp;

	i = 1;
	t = 1;
	while (t < size)
	{
		i = 1;
		while (i < size)
		{
			if (compare(*str_arr[i], str_arr[i + 1]) == 1)
			{
				tmp = str_arr[i];
				str_arr[i] = str_arr[i + 1];
				str_arr[i + 1] = tmp;
			}
			i++;
		}
		t++;
	}
	return ;
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	bubble(av, ac - 1);
	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != 0)
		{
			write(1, &av[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
