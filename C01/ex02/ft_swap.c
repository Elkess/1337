/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkess <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 10:39:38 by melkess           #+#    #+#             */
/*   Updated: 2024/07/30 10:47:34 by melkess          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print(char c)
{
	write(1, &c, 1);
}

void ft_swap(int *a, int *b)
{
	int	temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int	n1,n2;
	n1=1;
	n2=2;
	ft_swap(&n1, &n2);
	print(n1 +48);
	print(n2 +48);
	return(0);
}
