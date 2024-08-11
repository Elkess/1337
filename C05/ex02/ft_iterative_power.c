/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkess <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 11:42:20 by melkess           #+#    #+#             */
/*   Updated: 2024/08/10 14:18:17 by melkess          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	assass;
	
	if (nb < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	assass = nb;
	while (power > 1)
	{
		nb = nb * assass;
		power--;
	}
	return (nb);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_power(0, 0));
}*/
