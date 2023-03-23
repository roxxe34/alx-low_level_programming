#include "main.h"
/**
 * print_line - straight line
 * @n: variable
 * return 0
 */
void print_line(int n)
{
int c = 0;
while (c < n && n > 0)
{
_putchar('_');
c++;
}
_putchar('\n');
}
