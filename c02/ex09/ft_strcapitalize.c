/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggyle <donggyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 17:41:36 by donggyle          #+#    #+#             */
/*   Updated: 2021/10/23 05:07:30 by donggyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	a;

	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		a = str[i - 1];
		if (!((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')))
			if (str[i] >= 'a' && str[i] <= 'z')
				if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
					str[i] = str[i] - 32;
		if (str[i] >= 'A' && str[i] <= 'Z')
			if (str[i - 1] >= '0' && str[i - 1] <= '9')
				str[i] = str[i] + 32;
		if ((a >= 'A' && a <= 'Z') && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = str[i] + 32;
		if ((a >= 'a' && a <= 'z') && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
