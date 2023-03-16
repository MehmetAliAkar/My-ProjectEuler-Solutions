#include <stdio.h>

int is_polindrome (int num)
{
	int new_num;
	int cnum;

	cnum = num;
	new_num = 0;
	
	while (num > 0)
	{
		new_num *= 10;
		new_num += num % 10;
		num /= 10;
	}
	num = cnum;
	if (new_num == num)
		return (1);
	return (0);
}

int find_largest(void)
{
	int num1;
	int num2;

	num1 = 999;
	num2 = 999;

	while (num1 >= 900)
	{
		num2=999;
		while(num2 >= 900)
		{
			if((is_polindrome(num1 * num2) == 1))
					return (num1 * num2);
			num2--;	
		}
		num1--;
	}
	return (-1);
}

int main (void)
{
	printf("\n\n%d\n", find_largest());
	return (0);
}
