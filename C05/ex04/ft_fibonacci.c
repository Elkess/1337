/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkess <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 13:21:29 by melkess           #+#    #+#             */
/*   Updated: 2024/08/13 01:51:38 by melkess          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index > 1)
		return (ft_fibonacci(index -1) + ft_fibonacci(index -2));
	else
		return (-1);
}
/*
int	main(void)
{
	printf("%d", ft_fibonacci(-5));
}*/
