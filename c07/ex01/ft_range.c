/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggyle <donggyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 07:34:17 by donggyle          #+#    #+#             */
/*   Updated: 2021/10/27 16:13:05 by donggyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*p;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	p = malloc(max - min);
	if (p == NULL)
		return (0);
	while (min < max)
	{
		p[i] = min;
		i++;
		min++;
	}
	return (p);
}
