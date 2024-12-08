/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1ex.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkess <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 19:48:14 by melkess           #+#    #+#             */
/*   Updated: 2024/07/27 21:00:52 by melkess          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */#include <unistd.h>
#include <stdio.h>

void print(char m)
{
	write(1, &m, 1);
}

void ft_max(int *a, int *b)
{
	int max;

	max = *a;
	if(max < *b)
	{
		max=*b;
	}
	print(max + 48);
}

int main()
{
	int a;
	int b;
	
	a=8;
	b=5;
	ft_max(&a,&b);
	return(0);
}
