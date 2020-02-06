#include <stdio.h>
/**
* main - alphabet
* Return: (0)
*/
int main(void)
{
int c = '0';
int co = 44;
int s = 32;
for (c = 0; c < 100; c++)
{
putchar((c / 10) + '0');
putchar((c % 10) + '0');
if (c < 99)
{
putchar(co);
putchar(s);
}
}
putchar('\n');
return (0);
}
