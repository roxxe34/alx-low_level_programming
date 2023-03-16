#include <stdio.h>
/**
 * main - Print (prints the size of various types)
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("The size of char is %ld bytes\n", sizeof(char));
printf("The size of int is %ld bytes\n", sizeof(int));
printf("The size of long is %ld bytes\n", sizeof(long));
printf("The size of long long is %ld bytes\n", sizeof(long long));
printf("The size of float is %ld bytes\n", sizeof(float));
return (0);
}
