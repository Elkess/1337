/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkess <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 13:44:04 by melkess           #+#    #+#             */
/*   Updated: 2024/07/30 15:04:00 by melkess          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
	
void	ft_putstr(char *str)
{
	while(*str)
	{
        write(1, str, 1);
		str++;
	}
}

int main(void)
{
	char *t="Hello Corrector!";
	ft_putstr(t);
}


