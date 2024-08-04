/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkess <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 13:15:41 by melkess           #+#    #+#             */
/*   Updated: 2024/08/03 09:00:24 by melkess          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    ft_ultimate_div_mod(int *a, int *b)
{
    int    temp;

    temp = *a;
    *a = *a / *b;
    *b = temp % *b;
}

int    main(void)
{
    int    x;
    int    y;

    x = 10;
    y = 2;
    ft_ultimate_div_mod(&x,&y);
    printf("%d-%d",x,y);
}
