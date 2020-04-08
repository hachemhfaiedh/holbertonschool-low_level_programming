#include <stdio.h>
/**
* main - main function
* Return: 0
*/
int main(void)
{
int c = 48;
int co = 44;
int s = 32;
for (c = 48; c <= 57; c++)
{
putchar(c);
if (c < 57)
{
putchar(co);
putchar(s);
}
}
putchar('\n');
return (0);
}
