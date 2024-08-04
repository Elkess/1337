/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkess <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:03:52 by melkess           #+#    #+#             */
/*   Updated: 2024/07/31 16:01:11 by melkess          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = i +1;
		while (j < size)
		{
			if( tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}	
			j++;
		}
		i++;
	}
}

int main(){
	int t[]={5,4,9,6,0,3};
	int s = 6;

	int i=0;
	ft_sort_int_tab(t,s);
	while (i<s)
	{
		printf("%d",t[i]);
		i++;
	}
}
