/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkess <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 12:53:34 by melkess           #+#    #+#             */
/*   Updated: 2024/07/26 12:24:05 by melkess          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(int n)
{
	char	c;

	c = n + 48;
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int	n;

	n = 0;
	while (n <= 9)
	{
		ft_putchar(n);
		n++;
	}
}
