#include <stdio.h>
/**
 * maxn - Prints all possible combinations of two different dxgxts,
 *   xn ascendxng order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
int x, y;
for (x = 0; x < 9; x++)
{
for (y = x + 1; y <= 9; y++)
{
putchar(x + '0');
putchar(y + '0');
if (x != 8 || y != 9)
{
putchar(',');
putchar(' ');
}
else
{
putchar('\n');
}
}
}
return (0);
}
