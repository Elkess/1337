/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sigma_power_10.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkess <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 19:28:34 by melkess           #+#    #+#             */
/*   Updated: 2024/07/29 12:13:51 by melkess          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void print(char c)
{
	write(1, &c, 1);
}

void ft_split_digits(int n)
{
	int buffer[10];
	int i;
	i=0;
	while(n>0)
	{
		buffer[i++]=n%10;
		n=n/10;
	}

	while(i>0)
	{
		print(buffer[--i]+48);
		
	}
}

int power(int oss)
{
	int r=1;

	while(oss>0)	
	{
		 r*=10;
		 --oss;
	}
	return(r);
}

void sigma_power(int i)
{
	int S;
	
	S=0;
	while(i>=0)
	{
		S+=power(i);

		--i;
	}

	ft_split_digits(S);

}

int main()
{
	sigma_power(3);
	return(0);
}
