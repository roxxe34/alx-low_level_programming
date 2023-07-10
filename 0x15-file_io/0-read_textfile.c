#include "main.h"
#include <stdlib.h>
/**
  * read_textfile - a function that reads a text file and prints it
  * @filename: A pointer to the name of the file.
  * @letters: The number of letters the
  *           function should read and print.
  *
  * Return: If the function fails or filename is NULL - 0.
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
int file = open(filename, O_RDONLY);
if (filename == NULL)
{
return (0);
}
char *buffer = malloc(letters);
ssize_t readfile = read(file, buffer, letters);
ssize_t print = write(STDOUT_FILENO, buffer, letters);
if (file == -1 || readfile == -1 || print == -1)
return (0);
free(buffer);
close(file);
return (print);
}
