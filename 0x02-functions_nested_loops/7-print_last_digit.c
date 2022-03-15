#include "main.h"
/**
 * print_last_digit - Return last digit of the number
 * @n: char type letter
 * Return: the last degit
 */
int print_last_digit(int n)
{
int lastDigit = (_abs(n)) % 10;
_putchar(lastDigit + '0');
return (n);
}
