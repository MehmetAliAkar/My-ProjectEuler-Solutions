#include <stdio.h>

int main(void)
{
	unsigned long tri_num;
	int i;
	int j;
	int divisor;
	i =	1;
	divisor = 0;
	while (divisor < 500)
	{
		divisor = 0;
		j = 1;
		tri_num += i;
		while (j * j <= tri_num) // to find the divisor of a number it is enough to check it until a root of the divisor
		{
			if(tri_num % j == 0)
				divisor+=2; // j and tri_num/j are divisor of the number
			j++;
		}
		i++;
	}
	printf("%lu",tri_num);
	return (0);
}