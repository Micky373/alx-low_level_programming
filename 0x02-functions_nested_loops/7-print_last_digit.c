#include "main.h"
/**
 * print_last_digit - Return last digit of the number
 * @n: char type letter
 * Return: the last degit
 */
int print_last_digit(int n)
{
n = n % 10;
if (n < 0)
n = -n;
_putchar(n + '0');
return (n);
}
