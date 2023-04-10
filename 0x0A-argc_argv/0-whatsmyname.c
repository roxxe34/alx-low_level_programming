#include <stdio.h>
/**
 * main - entry
 *
 * return 0
 */
int main(int argc, char *argv[])
{
if (argc > 1)
{
printf("The first argument is: %s\n", argv[1]);
}
else
{
printf("No arguments provided.\n");
}
return 0;
}
