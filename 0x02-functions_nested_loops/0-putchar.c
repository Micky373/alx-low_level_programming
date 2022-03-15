#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void){
char Micky[]="_putchar";
int i=0;
while (Micky[i] != '\0')
{
_putchar(Micky[i]);
i++;
}
_putchar('\n');
return (0);
}
