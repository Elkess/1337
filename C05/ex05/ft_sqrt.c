/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkess <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 14:24:25 by melkess           #+#    #+#             */
/*   Updated: 2024/08/13 01:57:41 by melkess          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	if (nb == 1)
		return (1);
	i = 1;
	while (i < nb)
	{
		if (nb == i * i)
			return (i);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d", ft_sqrt(121));
}*/
