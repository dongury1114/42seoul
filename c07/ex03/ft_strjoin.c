/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggyle <donggyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 23:15:15 by donggyle          #+#    #+#             */
/*   Updated: 2021/10/27 11:54:47 by donggyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*sortfunc(char *sep, char **strs, int size)
{
	char	*rtn;
	long	len1;
	long	len2;
	long	cnt[2];

	cnt[0] = 0;
	len2 = 0;
	len1 = 0;
	while (cnt[0]++ < size)
	{
		cnt[1] = 0;
		while (strs[cnt[0] - 1][cnt[1]] != '\0')
		{
			len2++;
			cnt[1]++;
		}
	}
	cnt[0] = 0;
	while (*sep != '\0')
	{
		len1++;
		sep++;
	}
	rtn = (char *)malloc((len1 * (size - 1) + len2 + 1) * sizeof(char));
	return (rtn);
}

void	ft_strcat(char *dest, char *src, char *sep)
{
	while (*dest != '\0')
		(dest)++;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		(dest)++;
	}
	while (*sep != '\0')
	{
		*dest = *sep;
		sep++;
		(dest)++;
	}
	*dest = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*rtn;
	char	*tmp;
	int		cnt;

	if (size == 0)
	{
		rtn = (char *)malloc(1);
		rtn[0] = '\0';
		return (rtn);
	}
	rtn = sortfunc(sep, strs, size);
	tmp = rtn;
	tmp[0] = 0;
	cnt = 0;
	while (cnt < size - 1)
		ft_strcat(tmp, strs[cnt++], sep);
	ft_strcat(tmp, strs[cnt], "");
	return (rtn);
}
