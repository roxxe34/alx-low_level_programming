#include <stdio.h>
/**
* main - Print (with proper grammar, but the outcome is a piece of art,)
*
* Return: Always 0 (Success)
*/
int main(void)
{
const char* message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
for (int i = 0; message[i] != '\0'; i++)
putchar(message[i]);
putchar('\n');
return (1);
}
