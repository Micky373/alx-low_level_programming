#include "main.h"
/**
 * print_sign - Return 1 if number is positive, -1 if negative and 0 if it is zero.
 * @c: char type letter
 * Return: 1 if lowercase, 0 if not lowercase
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n<0)
{
_putchar('-');
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
