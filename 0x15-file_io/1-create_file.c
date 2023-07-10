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
	int len = 0;
	char buffer[1] = "";
	int crfile;
	ssize_t fwrite;
	ssize_t truncate;
if (filename == NULL)
{
	return (-1);
}
	crfile = open(filename, O_WRONLY | O_CREAT, 0600);
if(crfile == -1)
{
	return (-1);
}
	truncate = truncate(filename, 0);
	if (truncate == -1)
	{
	close(filename);
	return (-1);
	}
while(text_content[len] != '\0')
{
	len++;
}

if(text_content != NULL)
{
	fwrite = write(STDOUT_FILENO, text_content, len);
if (fwrite == -1)
{
	close(filename);
	return (-1);
}
}
else
{
fwrite = write(STDOUT_FILENO, buffer, sizeof(buffer));
if (fwrite == -1)
close(filename);
return (-1);
}
close(filename);
return (1);
}
