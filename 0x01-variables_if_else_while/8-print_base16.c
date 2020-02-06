#include <stdio.h>
/**
 *main - main function
 *@void: empty
 *Return: 0
 */
int main(void)
{
char c = 'a';
char i = '0';
char c2 = '\n';
for (i = '0'; i <= '9'; i++)
{
putchar(i);
}
for (c = 'a'; c <= 'f'; c++)
{
putchar (c);
}
putchar (c2);
return (0);
}
