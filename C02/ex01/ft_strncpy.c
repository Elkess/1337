/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkess <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 09:21:32 by melkess           #+#    #+#             */
/*   Updated: 2024/08/03 19:26:10 by melkess          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
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

// int main()
// {
// 	int dest_size = 10;
// 	char dest[dest_size];
// 	char src[] = "";
// 	int n = 4;

// 	ft_strncpy(dest,src,n);
// 	write(1, "\n",1);
// 	printf("Mine : \n");

// 	puts(dest);
// 	for (int i = 0; i < dest_size; i++)
// 	{
// 		if (dest[i] == '\0')
// 			printf("dest[%d] => \\0 \n", i);
// 		else 
// 			printf("dest[%d] => %c \n", i, dest[i]);
// 	}
// 	write(1, "\n",1);
// 	strncpy(dest,src,n);
// 	write(1, "\n",1);
// 	printf("Origin : \n");
// 	puts(dest);
// 	for (int i = 0; i < dest_size; i++)
// 	{
// 		if (dest[i] == '\0')
// 			printf("dest[%d] => \\0 \n", i);
// 		else 
// 			printf("dest[%d] => %c \n", i, dest[i]);
// 	}
// }