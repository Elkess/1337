#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char	s1[] = "ab c";
	char	s2[] = "aab ";
	printf("%d", ft_strcmp(s1, s2));
	printf("\n");
	printf("%d", strcmp(s1, s2));
}
