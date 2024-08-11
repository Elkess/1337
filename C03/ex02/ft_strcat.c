/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkess <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 00:32:30 by melkess           #+#    #+#             */
/*   Updated: 2024/08/10 03:59:06 by melkess          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main(void) {
    char src[] = "2";
    char dest[3] = "1"; 
   int size =3;	
    printf("Origin:\n");
    strcat(dest, src);
	int i;
    for(i = 0; i < size; i++)
	{
		dest[i] == '\0'
			 ? printf("Dest[%d] => \\0\n", i)
			 : printf("Dest[%d] =>%c \n", i, dest[i]);
	}

    char src2[] = "2";
    char dest2[3] = "1";  
	printf("Mine:\n");
    ft_strcat(dest2, src2);
    for(i = 0; i < size; i++)
	{
		dest2[i] == '\0'
			 ? printf("Dest[%d] => \\0\n", i)
			 : printf("Dest[%d] =>%c \n", i, dest2[i]);
	}
    return 0;
}*/
