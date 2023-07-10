#include <stdlib.h>
#include "main.h"
/**
  * append_text_to_file - a function that reads a text file and prints it
  * @filename: A pointer to the name of the file.
  * @letters: The number of letters the
  *           function should read and print.
  *
  * Return: 1 if successed.
  */
int append_text_to_file(const char *filename, char *text_content)
{
int fwrite, file, len = 0;
if (filename == NULL)
{
return (-1);
}
file = open(filename, O_RDWR | O_APPEND, 0644);
if (file == -1)
{
return (-1);
}
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
fwrite = write(file, text_content,  len);
if (bytes_written == -1 || bytes_written < len)
{
close(file);
return (-1);
}
close(file);
return (1);
}
