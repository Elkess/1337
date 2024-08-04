/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb1.2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkess <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:31:34 by melkess           #+#    #+#             */
/*   Updated: 2024/07/29 16:49:09 by melkess          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	c;
	int	b;
	int	a;

	a = 0;
	while (a <= 7)
	{
		b = a +1;
		while (b <= 8)
		{
			c = b +1;
			while (c <= 9)
			{
				print (a +48);
				print (b +48);
				print (c +48);
				if (a != 7)
					write(1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}
