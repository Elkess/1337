/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkess <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 15:40:35 by melkess           #+#    #+#             */
/*   Updated: 2024/08/07 17:08:02 by melkess          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i,j;

	i = 0;
	j = 0;
	while (i < size -1 )
	{
		dest[i] = src[i];
		i++;
	}
	//while (i < size)
	//{
		dest[i] = '\0';
	//	i++;
//	}
	while (src[j])
	{
		j++;
	}
	return j;
}

int	main(void)
{
	char	dest[10] = "" ;
	char	src[]="";
	
	unsigned int	size = 9;
	printf("Mine : %d\n", ft_strlcpy(dest, src, size));
	printf("dest : %s\n", dest);
	printf("\n");
	
	unsigned int i;
	for (i =0; i < size ; i++){
		if (dest[i] == '\0')
			printf("dest[%d] => \\0 \n", i);
		else
		printf("dest[%d] => %c \n", i, dest[i]);
	}

	printf("\n");
	printf("Origin : %lu\n", strlcpy(dest, src, size));
	printf("dest : %s\n", dest);
	printf("\n");
	for (i =0; i <size ; i++){
		if (dest[i] == '\0')
			printf("dest[%d] => \\0 \n", i);
		else
			printf("dest[%d] => %c \n", i, dest[i]);
	}
}

