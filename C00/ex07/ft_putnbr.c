/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkess <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 18:27:57 by melkess           #+#    #+#             */
/*   Updated: 2024/07/30 12:06:10 by melkess          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	buffer[10];	
	int	i;

	i = 0;
	if (nb < 0 && nb != -2147483648)
	{
		nb = -nb;
		print('-');
	}
	if (nb == -2147483648)
	{
		print('-');
		print('2');
		nb = 147483648;
	}
	if (nb == 0)
		print('0');
	while (nb > 0)
	{
		buffer[i] = nb % 10;
		nb = nb / 10;
		i++;
	}
	while (i > 0)
		print(buffer[--i] +48);
}

int main(void)
{
	ft_putnbr(04);
	return 0;
}
