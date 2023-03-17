#include <stdio.h>
/**
 * main - entry point
 *
 * prints the alphabet in lowercase and uppercase using putchar
 *
 * Return: Always 0
 */
int main(void)
{
char lower = 'a';
char upper = 'A';
while (lower <= 'z')
{
putchar(lower);
lower++;
}
while (upper <= 'Z')
{
putchar(upper);
upper++;
}
putchar('\n');
return (0);
}
