/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkess <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 19:21:20 by melkess           #+#    #+#             */
/*   Updated: 2024/08/04 15:23:00 by melkess          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

// function that handles if a character is lower case  
int	ft_char_is_lower(int i, char *str)
{
	if (str[i] >= 'a' && str[i] <= 'z')
		return (1);
	return (0);
}

// function that handles before the char  if it is not char or nbr
int	ft_not_char_o_nbr(int i, char *str)
{
	if (str[i] <= 47 || (str[i] >= 58 && str[i] <= 64)
		|| (str[i] >= 91 && str[i] <= 96) || str[i] >= 123)
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_char_is_lower(i, str) && ft_not_char_o_nbr((i -1), str))
			str[i] -= 32 ;
		if (str[i +1] >= 'A' && str[i +1] <= 'Z')
			str[i +1] += 32;
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	s[100];
// 	char	st[100];

// 	strcpy(s, "salut, comment tu vas ? 42mots quarante-deux;cinquante+et+un");
// 	strcpy(s, "s-w/t3jkmfH.feODEE;mdwW iO");
// 	puts(ft_strcapitalize(s));
// 	puts(ft_strcapitalize(st));
// 	return (0);
// }