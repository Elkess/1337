/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkess <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 23:04:24 by melkess           #+#    #+#             */
/*   Updated: 2024/08/15 01:12:20 by melkess          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
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
	{
		i++;
	}
	return (i);
}

int	compaire_with_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	res;
	int	base_len;

	res = 0;
	base_len = ft_base_len(base);
	i = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13)
		|| str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	if (is_valid_base(base, base_len))
	{
		while (compaire_with_base(str[i], base) != -1 && str[i] != '\0')
		{
			res = res * base_len + compaire_with_base(str[i], base);
			i++;
		}
	}
	return (res * sign);
}
/*
int	main(int ac, char **av)
{
	if (ac == 3)
	{
		char	*str = av[1];
		char	*base = av[2];

		printf("%d", ft_atoi_base(str, base));
	}
}*/
