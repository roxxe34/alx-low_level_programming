#include <stdlib.h>
#include "main.h"
/**
  * create_file - a function that create a file
  * @text_content: the content of file
  * @filename: namefile
  *
  * Return: 1 if success
  */
int create_file(const char *filename, char *text_content)
{
int bytes_written, file, len = 0;
if (filename == NULL)
{
return (-1);
}
file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
if (file == -1)
{
return (-1);
}
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}

bytes_written = write(file, text_content, len);
if (bytes_written == -1 || bytes_written < len)
{
close(file);
return (-1);
}
close(file);
return (1);
}
