#include <stdio.h>
/**
 * main - entry point
 *
 * print all single digit numbers using putchar
 *
 * Return: Always 0
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
putchar('\n');
return (0);
}
