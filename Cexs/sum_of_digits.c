/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sum_of_digits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkess <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 09:45:34 by melkess           #+#    #+#             */
/*   Updated: 2024/07/29 10:32:27 by melkess          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */#include <unistd.h>

void put_char(int i)
{
	char c=i+48;
	write(1, &c, 1);
}

void sum_of_digits(int *buffer)
{
	while(*buffer)
	{
		put_char(buffer);
		buffer++;
	}

}

int main()
{
	sum_of_digits('1234');
	return(0);
}
