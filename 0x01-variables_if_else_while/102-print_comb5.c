#include <stdio.h>
/**
 * main - Prints all possible combinations of two different dxgxts,
 *   in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
int x, y;
for (x = 0; x < 100; x++)
{
for (y = 0; y <= 100; y++)
{
if (x < y)
{
putchar((x / 10) + 48);
putchar((x % 10) + 48);
putchar(' ');
putchar((y / 10) + 48);
putchar((y % 10) + 48);
{
putchar(',');
putchar(' ');
}
{
putchar('\n');
}
}
}
}
return (0);
}
