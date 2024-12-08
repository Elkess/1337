/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkess <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 01:09:15 by melkess           #+#    #+#             */
/*   Updated: 2024/08/10 03:37:10 by melkess          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	while (src[i] != '\0' && i < nb)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char 	dest[9] = "01234";
	char	src[]="56789";
	unsigned int	nb = 3;
	int size = 9;
	int i;

	printf("Origin :\n");
	strncat(dest, src, nb);
	for(i = 0; i < size; i++)
	{
		dest[i] == '\0'
			 ? printf("Dest[%d] => \\0\n", i)
			 : printf("Dest[%d] =>%c \n", i, dest[i]);
	}

		char 	dest2[9] = "01234";
	char	src2[]="56789";

	printf("Mine :\n");
	ft_strncat(dest2, src2, nb);
	for(i = 0; i < size; i++)
	{
		dest2[i] == '\0'
			 ? printf("Dest[%d] => \\0\n", i)
			 : printf("Dest[%d] =>%c \n", i, dest2[i]);
	}
}*/
