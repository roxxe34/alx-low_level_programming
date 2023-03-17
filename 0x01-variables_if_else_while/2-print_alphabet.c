#include <stdio.h>
/**
 *
 * main - alphabet in lower cases
 *
 * return 0 if it work
 *
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
