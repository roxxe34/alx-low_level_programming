#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * alphabet in lower case
 *
 * return 0
 */
void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
}
