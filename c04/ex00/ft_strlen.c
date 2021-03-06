/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggyle <donggyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:12:15 by donggyle          #+#    #+#             */
/*   Updated: 2021/10/20 13:50:43 by donggyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (1)
	{
		if (*str == '\0')
			break ;
		str++;
		i++;
	}
	return (i);
}
