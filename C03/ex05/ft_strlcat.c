/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkess <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 07:44:10 by melkess           #+#    #+#             */
/*   Updated: 2024/10/26 08:29:38 by melkess          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	l_s;
	unsigned int	l_d;

	l_d = 0;
	l_s = 0;
	i = 0;
	while (dest[l_d] && l_d < size)
		l_d++;
	while (src[l_s])
		l_s++;
	if (l_d == size)
		return (size + l_s);
	while (src[i] && l_d + i < size -1)
	{
		dest[l_d + i] = src[i];
		i++;
	}
	dest[l_d + i] = '\0';
	return (l_d + l_s);
}

int	main(void)
{
	char dst1[100] = "Hello";
	char *src = ",0Mr.Jilali x9arboubi";
	int ds = 3;
	printf("\nmine: \n");
	printf("%u\n", ft_strlcat(dst1, src, ds));
	puts(dst1);
	char dst2[100] = "Hello";
	printf("Orig: \n%zu\n", strlcat(dst2, src, ds));
	puts(dst2);


}
