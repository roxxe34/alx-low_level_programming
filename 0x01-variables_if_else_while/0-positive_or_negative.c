#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - print negative or positive
* 
* Positive anything is better than negative nothing
*/
int main(void)
/**
* this code is in betty
*
* return value 0
*/
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
