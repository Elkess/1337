/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkess <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 10:45:57 by melkess           #+#    #+#             */
/*   Updated: 2024/08/04 11:50:52 by melkess          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	int	size;

// 	size = 12;
// 	char	dest[size];
// 	char	src[8];

// 	strcpy(src, "1234567");
// 	ft_strcpy(dest, src);
// 	write(1, "\n", 1);
// 	printf("Mine : \pn");
// 	puts(dest);
// 	for (int i = 0; i < size; i++)
// 	{
// 		if (dest[i] == '\0')
// 			printf("dest[%d] => \\0 \n", i);
// 		else 
// 			printf("dest[%d] => %c \n", i, dest[i]);
// 	}
// 	write(1, "\n",1);
// 	strcpy(dest,src);
// 	write(1, "\n",1);
// 	printf("Origin : \n");
// 	puts(dest);
// 	for (int i = 0; i < size; i++)
// 	{
// 		if (dest[i] == '\0')
// 			printf("dest[%d] => \\0 \n", i);
// 		else 
// 			printf("dest[%d] => %c \n", i, dest[i]);
// 	}
// }