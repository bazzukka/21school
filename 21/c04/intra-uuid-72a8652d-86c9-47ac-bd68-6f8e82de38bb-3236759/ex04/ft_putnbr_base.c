/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 18:06:17 by ckina             #+#    #+#             */
/*   Updated: 2020/07/20 18:12:32 by ckina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nb, char *base)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if ((nb / 10) > 0)
		ft_putnbr_base(nb / 10, base);
	ft_putchar(nb % 10 + 48);
}
