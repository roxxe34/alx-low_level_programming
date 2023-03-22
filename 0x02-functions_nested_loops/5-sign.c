#include "main.h"
/**
 * print_sign - Enter point
 * @n: carrier variable
 * Description:prints the sign of the number
 * Return: 1 if n>0, 0 if n == 0, -1 if n<0
 */
int print_sign(int n)
{
if (n > 0)
{
printf("+");
return 1;
} else if (n == 0)
{
printf("0");
return 0;
} else
{
printf("-");
return -1;
}
}
