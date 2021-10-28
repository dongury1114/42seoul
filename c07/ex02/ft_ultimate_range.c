/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggyle <donggyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 23:15:17 by donggyle          #+#    #+#             */
/*   Updated: 2021/10/27 16:13:40 by donggyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	long	cnt;
	long	minnum;
	long	maxnum;
	int		*rtn;

	maxnum = max;
	minnum = min;
	if (maxnum - minnum <= 0)
	{
		*range = 0;
		return (0);
	}
	rtn = (int *)malloc(sizeof(int) * (maxnum - minnum));
	if (rtn == 0)
		return (-1);
	cnt = 0;
	while (cnt < maxnum - minnum)
	{
		rtn[cnt] = (int)(minnum + cnt);
		cnt++;
	}
	*range = rtn;
	return ((int)cnt);
}
