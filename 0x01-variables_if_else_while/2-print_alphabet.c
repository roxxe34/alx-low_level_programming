#include <stdio.h>
/**
 * main - entry point
 * 
 * prints the alphabet in lowercase using putchar
 *
 * Return: Always 0
 */
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
