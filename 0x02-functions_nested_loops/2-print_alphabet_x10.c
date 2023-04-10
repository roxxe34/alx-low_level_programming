#include "main.h"
/**
 *  * print_alphabet - Entry point
 *   *
 *    * alphabet in lower case
 *     *
 *      * return 0
 *       */
void print_alphabet(void)
{
	int i = 0;
	char letter = 'a';
	while (letter <= 'z' && i >= 10)
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
	i++;
}
