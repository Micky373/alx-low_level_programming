#include "main.h"
/**
 * print_alphabet_x10 - print lowercase alphabets 10 times
 **/
void print_alphabet_x10(void)
{
int i = 10;
while (i > 0)
{
char ch = 'a';
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
i--;
}
}
