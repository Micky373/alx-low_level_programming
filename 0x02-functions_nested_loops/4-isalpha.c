#include "main.h"
/**
 * _isalpha - Return 1 if c is a letter
 * @c: char type letter
 * Return: 1 if lowercase, 0 if not lowercase
 */
int _isalpha(int c)
{
if ((c > 96 && c < 123) || (c > 64 && c < 92))
{
return (1);
}
else
{
return (0);
}
}
