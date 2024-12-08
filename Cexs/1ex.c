/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1ex.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkess <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 23:43:43 by melkess           #+#    #+#             */
/*   Updated: 2024/07/29 11:56:09 by melkess          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_change_int_to_char(int c)
{
    c+=48;
    write(1, &c, 1);
}
                                                                
void ft_handle_two_digits(int a)
{
	char d1 ='0'+ a / 10;
  	char d2 = '0'+ a % 10;
	
	write(1, &d1, 1);
	write(1, &d2, 1);
}

void ft_display_ten_natural_nbrs(void)
{
    int n=1;
    while(n < 10)
	{
        ft_change_int_to_char(n);
		n = n+1;
		if (n > 9)
		   ft_handle_two_digits(n);
	}
}

int main()
{
	ft_display_ten_natural_nbrs();
	
	return 0;
}
