#include <unistd.h>
#include "main.h"
/**
 * main - entry poiny
 * print _putchar, followed by a new line.
 *
 * Return: On success 0
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
char word[8] = "_putchar";
int i;
for (i = 0; i < 8; i++)
_putchar(word[i]);
_putchar('\n');
return (0);
}
