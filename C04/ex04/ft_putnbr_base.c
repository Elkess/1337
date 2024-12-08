/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkess <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 21:54:04 by melkess           #+#    #+#             */
/*   Updated: 2024/08/15 00:57:44 by melkess          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_valid_base(char *base, int len)
{
	int	i;
	int	j;

	if (len == 2 || len == 8 || len == 16 || len == 10)
	{
		i = 0;
		while (base[i])
		{
			if (base[i] == '-' || base[i] == '+'
				|| base[i] == 32 || (base[i] >= 9 && base[i] <= 13))
				return (0);
			j = i + 1;
			while (base[j])
			{
				if (base[i] == base[j])
					return (0);
				j++;
			}
			i++;
		}
		return (1);
	}
	else
		return (0);
}

int	ft_base_len(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	base_len;

	base_len = ft_base_len(base);
	if (is_valid_base(base, base_len) == 1)
	{
		if (nbr == -2147483648)
			write(1, "-2147483648", 11);
		else if (nbr < 0)
		{
			write(1, "-", 1);
			nbr = -nbr;
			ft_putnbr_base(nbr, base);
		}
		else if (nbr >= base_len)
		{
			ft_putnbr_base(nbr / base_len, base);
			ft_putnbr_base(nbr % base_len, base);
		}
		else
		{
			write(1, &base[nbr], 1);
		}
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int n = -2147483648;
	char *base = "0123456789ABCDEF";
	ft_putnbr_base(n, base);
}*/
