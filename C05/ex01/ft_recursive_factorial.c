/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkess <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 11:25:31 by melkess           #+#    #+#             */
/*   Updated: 2024/08/10 11:41:12 by melkess          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 1)
		return (1);
	if (nb > 0)
		return (nb * ft_recursive_factorial(nb -1));
	else
		return (0);
}
/*
int	main(void)
{
	printf("%d", ft_recursive_factorial(1));
	return 0;
}*/
