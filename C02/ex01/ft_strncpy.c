/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkess <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 09:21:32 by melkess           #+#    #+#             */
/*   Updated: 2024/08/07 17:16:07 by melkess          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	main(void)
{
char	dest[10] = "" ;
	char	src[]="";

	unsigned int	size = 9;
	printf("Mine : %s\n", ft_strncpy(dest, src, size));
	printf("\n");

	unsigned int i;
	for (i =0; i < size ; i++){
		if (dest[i] == '\0')
			printf("dest[%d] => \\0 \n", i);
		else
		printf("dest[%d] => %c \n", i, dest[i]);
	}
char	dest2[10] = "" ;
	char	src2[]="";
	printf("\n");
	printf("Origin : %s\n", strncpy(dest2, src2, size));
	printf("\n");
	for (i =0; i <size ; i++){
		if (dest[i] == '\0')
			printf("dest[%d] => \\0 \n", i);
		else
			printf("dest[%d] => %c \n", i, dest2[i]);
	}
}

