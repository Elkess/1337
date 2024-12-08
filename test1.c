#include <stdio.h>

void sort_int_tab(int *t, int size)
{
	int i, j;
		
		int hv;

	i = 0;
	while (i < size)
	{
		j = i +1;
		while (j < size)
		{
			if (t[i] > t[j])
			{
				 hv = t[i];
				 t[i] = t[j];
				 t[j] = hv;
			}
			j++;
		}i++;
	}
}

int main(void)
{
	int t[] ={7,3,0,4,1};
	sort_int_tab(t,5);
	int i;
	while (i < 5)
	{
		printf("%d", t[i]);
		i++;
	}
}
