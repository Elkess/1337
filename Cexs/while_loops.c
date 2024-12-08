/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   while_loops.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkess <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:00:20 by melkess           #+#    #+#             */
/*   Updated: 2024/07/28 18:50:55 by melkess          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */#include <unistd.h>

void ft_print_char(char c)
{
	write(1, &c, 1);
}

void ft_from_2digits_to_1(int n)
{
	char d1= n/10;
	char d2= n%10;

	ft_print_char(d1+48);
	ft_print_char(d2+48);
	write(1,", ", 2);
}

void ft_show_nbr_plus_ten(int n)
{
	const int CN = n;
	while(n <= CN+10)
	{
		ft_from_2digits_to_1(n);
		n++;
	}
}

int main()
{
	ft_show_nbr_plus_ten(33);
	return 0;
}
