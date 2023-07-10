#include <stdlib.h>
#include "main.h"
/**
  * append_text_to_file - a function that appends text at the end of a file
  * @text_content: the content of file
  * @filename: namefile
  *
  * Return: 1 if success
  */
int append_text_to_file(const char *filename, char *text_content)
{
int fwrite, file, len = 0;
if (filename == NULL)
{
return (-1);
}
file = open(filename, O_WRONLY | O_APPEND);
if (file == -1)
{
return (-1);
}
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
if (len > 0)
{
fwrite = write(file, text_content,  len);
if (fwrite == -1 || fwrite < len)
{
close(file);
return (-1);
}
}
close(file);
return (1);
}
