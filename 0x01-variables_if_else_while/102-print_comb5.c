#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 48;
int j = 48;
int k = 48;
int l = 48;
int count = 0;
for (i = 48; i <= 57; i++)
{
for (j = 48 ; j <= 57; j++)
{
for (k = 48 ; k <= 57; k++)
{
for (l = 49 ; l <= 57; l++)
{
count++;
putchar(i);
putchar(j);
putchar(' ');
putchar(k);
putchar(l);
if (i < 57 || j < 57 || k < 57 || l < 57)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
printf("%d",count);
return (0);
}
