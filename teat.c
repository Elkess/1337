#include <stdio.h>

int ft_atoi(char *str)
{
    int i;
    int sign;
    int res;

    res = 0;
    sign = 1;
    i = 0;
	// Phase 1: Skip all kind spaces
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
    {
        i++;
    }
	// Phase 2: Handle signs
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign *= -1;
      	 i++;
    }
	// Pahse 3: Convert to int
    while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] -48);
		i++;
    }
	return (res*sign);
}
/*
int main(int arc, char **arcv)
{
	if (arc == 2)
		printf("%d",  ft_atoi(arcv[1]));
}
*/
