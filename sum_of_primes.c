#include <stdio.h>

int is_prime(int num)
{
	int i;

	i = 2;
	if (num < 2)
		return (0);
	while (i <= num / i)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

long long sum_of_primes(int num)
{
	long long sum_prime;
	sum_prime = 0;

	while (num >= 2)
	{
		if (is_prime(num)==1)
			sum_prime += num;
		num--;
	}
	return (sum_prime);
}

int main(void)
{
	printf("%lld " , sum_of_primes(2000000));
	return (0);
}
