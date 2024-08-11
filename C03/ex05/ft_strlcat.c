/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkess <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 07:44:10 by melkess           #+#    #+#             */
/*   Updated: 2024/08/10 08:48:29 by melkess          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
