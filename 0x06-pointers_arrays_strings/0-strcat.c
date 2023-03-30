#include "main.h"
#include <stdio.h>
/**
 * *_strcat - concatanate two strings
 * @dest: varia
 * @src: string
 * return dest
 */
char *_strcat(char *dest, char *src)
{
int i, j;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return dest;
}
