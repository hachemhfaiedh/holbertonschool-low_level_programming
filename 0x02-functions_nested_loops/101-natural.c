#include <stdio.h>
/**
 * main - main func
 * Return: 0
 */
int main(void)
{
int i, s;
for (i = 0; i <= 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
s += i;
}
printf("%d\n", s);
return (0);
}
