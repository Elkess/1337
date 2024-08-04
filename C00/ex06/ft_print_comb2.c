/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkess <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 17:44:39 by melkess           #+#    #+#             */
/*   Updated: 2024/07/29 18:23:03 by melkess          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

void	print_two_digits(int n)
{
	char	d1;
	char	d2;

	d1 = n / 10;
	d2 = n % 10;
	print(d1 +48);
	print(d2 +48);
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 <= 98)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			print_two_digits(n1);
			write(1, " ", 1);
			print_two_digits(n2);
			if (n1 < 98)
				write(1, ", ", 2);
			n2++;
		}
		n1++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
