/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkess <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 10:34:25 by melkess           #+#    #+#             */
/*   Updated: 2024/07/31 11:37:59 by melkess          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	int	hr;

	i = 0;
	while (i < size)
	{
		hr = tab[i];
		tab[i] = tab[size-1];
		tab[size-1] = hr;
		i++;
		size--;
	}
}

int	main(void)
{
	int t[] = {1,2,3,4,5, 6};
   	int s = 6;
	
	ft_rev_int_tab(t,s);
	int i = 0;
	while (i < s)
	{
		int a = 48 + t[i];
		write(1, &a, 1);
		i++;
	}	
	return 0;
}
