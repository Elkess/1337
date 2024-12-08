/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkess <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 20:06:14 by melkess           #+#    #+#             */
/*   Updated: 2024/08/10 09:19:10 by melkess          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*

	// Phase 1: Skip all kinds of spaces
	// Phase 2: Handle signs
	// Pahse 3: Convert to int
	/
*/
int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	res;

	res = 0;
	sign = -1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] -48);
		i++;
	}
	return (res * sign);
}
/*
int main(void)
{
    char s[] ="     ---+--+1234ab567";
    int n;

    //char st[] ="    -1234ab567";
    n =  ft_atoi(s);
    printf("%d", n);
}*/
/*
int main(int arc, char **arcv)
{
	if (arc == 2)
		printf("%d",  ft_atoi(arcv[1]));
}
*/
