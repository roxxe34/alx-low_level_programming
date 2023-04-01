#include <stdio.h>
/**
 * main - entry point
 *
 * print all single digit numbers using putchar
 *
 * Return: Always 0
 */
int main (void)
{
char c = 48;
char d = 97;
while (c <= 57)
{
putchar(c);
c++;
}
while (d <= 102)
{
putchar(d);
d++;
}
putchar('\n');
}
