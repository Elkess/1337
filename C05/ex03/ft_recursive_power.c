/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkess <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 12:29:43 by melkess           #+#    #+#             */
/*   Updated: 2024/08/13 01:49:32 by melkess          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 0)
	{
		power--;
		nb = nb * ft_recursive_power(nb, power);
	}
	return (nb);
}
/*
int	main(void)
{
	printf("%d\n",ft_recursive_power(-2,2));	
}*/
