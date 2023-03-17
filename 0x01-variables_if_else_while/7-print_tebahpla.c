#include <stdio.h>
/**
 * main - entry point
 *
 * prints the alphabet in reserve
 *
 * Return: Always 0
 */
int main(void)
{
char letter = 'z';
while (letter <= 'a')
{
putchar(letter);
letter--;
}
putchar('\n');
return (0);
}
