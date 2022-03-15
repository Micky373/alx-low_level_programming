#include "main.h"
/**
 * print_alphabet - print lowercase alphabets
 **/
void print_alphabet_x10(void)
{
int i = 10;
while (i>1)
{
char ch = 'a';
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
i--;
}
_putchar('\n');
}
