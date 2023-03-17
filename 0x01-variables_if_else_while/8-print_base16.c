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
char hex_digits[] = "0123456789abcdef";
for (i = 0; i < 16; i++)
{
putchar(hex_digits[i]);
}
putchar('\n');
return (0);
}
