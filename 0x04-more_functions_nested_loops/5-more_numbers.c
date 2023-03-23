#include "main.h"
/**
 * more_numbers - more numbers duh
 *
 * return walo
 */
void more_numbers(void)
{
char i = 0, j;
while (i < 15)
{
j = 0;
while (j < 11)
{
_putchar('\n');
j++;
}
_putchar(i + '0');
i++;
}
_putchar('\n');
}
