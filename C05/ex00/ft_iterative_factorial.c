/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkess <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 10:45:47 by melkess           #+#    #+#             */
/*   Updated: 2024/08/10 11:23:41 by melkess          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb > 0)
	{
		while (nb > 0)
		{
			res *= nb;
			nb--;
		}
	}
	else
		return (0);
	return (res);
}
/*
int	main(void)
{
	int nb = 0;
	printf("%d", ft_iterative_factorial(nb)); 
	return 0;
}*/
