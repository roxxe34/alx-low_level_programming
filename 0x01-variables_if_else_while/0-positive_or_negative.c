#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
*Positive anything is better than negative nothing
*/
int main(void)
/*
* this code is in betty
*/
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
{
if (n > 0)
{
printf("n is positive\n");
if (n == 0)
printf("n is zero\n");
if (n < 0)
printf("n is negative\n");
}
return (0);
}
}
