#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *cr_buffer(char *file);
void close(int fd);
/**
 * cr_buffer - Allocates 1024 bytes to a buffer.
 * @file: The name of the file buffer
 *
 * Return: A pointer to the new buffer.
 */
char *cr_buffer(char *file)
{
char *buffer;
buffer = malloc(sizeof(char) * 1024);
if (buffer == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", file);
exit(99);
}
return (buffer);
}
/**
 * close - Closes file descriptors
 * @fd: The file  to be closed
 */
void close(int fd)
{
int c;
c = close(fd);
if (c == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}
/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 */
int main(int argc, char *argv[])
{
int source, dest, r, w;
char *buffer;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
buffer = cr_buffer(argv[2]);
source = open(argv[1], O_RDONLY);
r = read(source, buffer, 1024);
dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do
{
if (source == -1 || r == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read source file %s\n", argv[1]);
free(buffer);
exit(98);
}
w = write(dest, buffer, r);
if (dest == -1 || w == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write dest %s\n", argv[2]);
free(buffer);
exit(99);
}
r = read(source, buffer, 1024);
dest = open(argv[2], O_WRONLY | O_APPEND);
}
while (r > 0);
free(buffer);
close(source);
close(dest);
return (0);
}
