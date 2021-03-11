/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 20:50:42 by ckina             #+#    #+#             */
/*   Updated: 2020/07/24 21:57:09 by ckina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		is;
	char	*d;
	int		il;

	i = 0;
	s = 0;
	while (src[is] != '\0')
		is++;
	d = (char *)malloc(sizeof(*d) * (is + 1));
	while (il < is)
	{
		d[il] = src[il];
		il++;
	}
	return (d);
}
