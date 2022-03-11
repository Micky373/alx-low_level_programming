#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char lowerch = 'a';
char upperch = 'A';
for (lowerch = 'a'; lowerch <= 'z'; lowerch++)
{
putchar(lowerch);
}
for (upperch = 'A'; upperch <= 'Z'; upperch++)
{
putchar(upperch);
}
putchar('\n');
return (0);
}
