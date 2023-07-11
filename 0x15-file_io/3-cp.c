#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * print_error - Print error message to stderr
 * @message: The error message to print
 */
void print_error(const char *message)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
}

/**
 * cp - Copy the content of a file to another file
 * @file_from: The source file
 * @file_to: The destination file
 *
 * Return: On success, return 0. On failure, return -1.
 */
ssize_t cp(const char *file_from, const char *file_to)
{
int fd_from, fd_to;
ssize_t bytes_read, bytes_written;
char buffer[BUFFER_SIZE];
fd_from = open(file_from, O_RDONLY);
if (fd_from == -1)
{
print_error(file_from);
return (-1);
}
fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0644);
if (fd_to == -1)
{
print_error(file_to);
close(fd_from);
return (-1);
}
while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written == -1)
{
print_error(file_to);
close(fd_from);
close(fd_to);
return (-1);
}
}
if (bytes_read == -1)
{
print_error(file_from);
close(fd_from);
close(fd_to);
return (-1);
}
if (close(fd_from) == -1)
{
print_error("Can't close fd");
return (-1);
}
if (close(fd_to) == -1)
{
print_error("Can't close fd");
return (-1);
}
return (0);
}
/**
 * main - Entry point
 * @argc: The argument count
 * @argv: The argument vector
 *
 * Return: 0 on success, 97 if arguments are incorrect, 99 on failure
 */
int main(int argc, char *argv[])
{
const char *file_from;
const char *file_to;
ssize_t result;
if (argc != 3)
{
print_error("Usage: cp file_from file_to");
return (97);
}
file_from = argv[1];
file_to = argv[2];
result = cp(file_from, file_to);
if (result == -1)
{
return (99);
}
return (0);
}
