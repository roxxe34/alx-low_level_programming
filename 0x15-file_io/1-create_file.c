#include <stdlib.h>
#include "main.h"
/**
  * create_file - a function that create a file
  * @text_content: the content of file
  *
  * Return: 1 if success
  */
int create_file(const char *filename, char *text_content)
{
ssize_t bytes_written;
int truncate_result;
int file;
int len = 0;
if (filename == NULL)
{
return (-1);
}
file = open(filename, O_WRONLY | O_CREAT, 0600);
if (file == -1) {
return (-1);
}
truncate_result = truncate(filename, 0);
if (truncate_result == -1)
{
close(file);
return (-1);
}
while(text_content[len] != '\0')
{
    len++;
}
if (text_content != NULL)
{
bytes_written = write(file, text_content, len);
if (bytes_written == -1)
{
close(file);
return (-1);
}
}
else 
{
	char buffer[1] = "";
	bytes_written = write(file, buffer, sizeof(buffer));
	if (bytes_written == -1) {
	close(file);
	return (-1);
}
}
close(file);
return (1);
}
