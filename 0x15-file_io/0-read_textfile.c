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
ssize_t file, readfile, print;
char *buffer;
if (filename == NULL)
{
	return (0);
}
	file = open(filename, O_RDONLY);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
	return (0);
	}
	readfile = read(file, buffer, letters);
	print = write(STDOUT_FILENO, buffer, letters);
if (file == -1 || readfile == -1 || print == -1 || print != readfile)
{
	free(buffer);
	return (0);
}
free(buffer);
close(file);
return (print);
}
