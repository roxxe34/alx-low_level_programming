#include <stdlib.h>
#include "main.h"
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
ssize_t file, fread, fwrite;
char *buffer;
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);
if (filename == NULL)
return (0);
file = open(filename, O_RDONLY);
if (file == -1)
return (0);
fread = read(file, buffer, letters);
if (fread == -1)
return (0);
fwrite = write(STDOUT_FILENO, buffer, fread);
if (fwrite == -1)
return (0);
close(file);
free(buffer);
return (fwrite);
}
