#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * main - Prints a random number and states whether
 * it is positive, negative, or zero.
 *
 * Return: Always 0.
 */
void positive_or_negative(int i)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive\n", n);
else if (n == 0)
printf("%d is zero\n", n);
else if (n < 0)
printf("%d is negative\n", n);
return (0);
}
