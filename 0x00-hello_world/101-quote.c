#include <unistd.h>
/**
 * main - Print (with proper grammar, but the outcome is a piece of art,)
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
ssize_t len = 0;
while (message[len] != '\0')
len++;
ssize_t n = write(STDERR_FILENO, message, len);
return (n != len);
}
