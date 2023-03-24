#include <stdio.h>
/**
 * main - entry point
 *
 * return 0
 */
int main(void)
{
long long int num = 612852475143;
long long int largest_prime_factor = 2;
while (num > largest_prime_factor)
{
if (num % largest_prime_factor == 0)
{
num = num / largest_prime_factor;
}
else
{
largest_prime_factor++;
}
}
printf("%lld\n", largest_prime_factor);
return (0);
}
