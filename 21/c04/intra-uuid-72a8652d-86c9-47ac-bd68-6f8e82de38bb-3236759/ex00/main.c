/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 18:33:24 by ckina             #+#    #+#             */
/*   Updated: 2020/07/18 18:33:28 by ckina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#icnlude "ft_strlen.c"

int        main(void)
{
    char *ptr;

    ptr = "hi";
    int ret = ft_strlen(ptr);
    printf("%d", ret);
    return (0);
}
