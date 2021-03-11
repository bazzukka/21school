/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 22:00:52 by ckina             #+#    #+#             */
/*   Updated: 2020/07/24 22:10:29 by ckina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *str;
	int i;
	int len;

	i = 0;
	len = max - min;
	str = (int *)malloc(sizeof(min) * len);
	if (min >= max)
	{
		return (NULL);
	}
	while (i < len)
	{
		str[i] = min + i;
		i++;
	}
	return (str);
}
