/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkess <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:05:05 by melkess           #+#    #+#             */
/*   Updated: 2024/07/30 16:23:06 by melkess          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int	i;

	i=0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);

}

int main(void)
{
	char *t="Hello";
	char n = ft_strlen(t) + 48;
	write(1, &n, 1);
	//printf("%d", ft_strlen(t));
	return 0;
}
