#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */
/**
*main - main function
*@void: empty
*function to find out if a variable is positive or negative
*Return: 0
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is 0\n", n);
}
else
{
printf("%d is negtive\n", n);
}
return (0);
}
