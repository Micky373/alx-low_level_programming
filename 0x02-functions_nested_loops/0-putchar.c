#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void){
char WRITE[]="_putchar";
int i=0;
while (WRITE[i] != '\0')
{
_putchar(WRITE[i]);
i++;
}
_putchar('\n');
return (0);
}
