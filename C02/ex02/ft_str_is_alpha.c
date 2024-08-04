/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkess <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 13:25:47 by melkess           #+#    #+#             */
/*   Updated: 2024/08/03 14:25:28 by melkess          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if( (str[i] >= 'a' && str[i] <= 'z') || ( str[i] >= 'A' && str[i] <= 'Z') )
			i++;
		else 
			return(0);
	}
	return (1);
}

int main()
{
	char *s= "";
	int res =ft_str_is_alpha(s);
	printf("%d",res);
	
	return 0;
}

