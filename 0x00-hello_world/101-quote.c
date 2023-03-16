#include <unistd.h>
/**
* main - Print (with proper grammar, but the outcome is a piece of art,)
*
* Return: Always 0 (Success)
*/
int main(void)
{
char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
ssize_t len = sizeof(message) - 1;
ssize_t n = write(STDERR_FILENO, message, len);
if (n != len)
return(1);
return(0);
}
