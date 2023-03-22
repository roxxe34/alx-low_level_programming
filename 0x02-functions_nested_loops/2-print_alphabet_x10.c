#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * alphabet in lower casex10
 *
 * return 0
 */
void print_alphabet_x10(void)
{
char x
int y = 0;
while (y <= 9)
{
for (x = 'a' ; x <= 'z' ; x++)
{
_putchar(x);
}
_putchar('\n');
}
}
