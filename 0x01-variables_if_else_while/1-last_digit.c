#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - main function
*@void: empty
*last digit of n comparison
*Return: 0
*/
int main(void)
{
int n, ld;
srand(time(0));
n = rand() - RAND_MAX / 2;
ld = n % 10;
if (ld > 5)
{
printf("Last digit of %d", n);
printf("is %d", ld);
printf("and is greater than 5\n");
}
else if (ld == 0)
{
printf("Last digit of %d", n);
printf("is %d", ld);
printf("and is 0\n");

}
else
{
printf("Last digit of %d", n);
printf("is %d", ld);
printf("and is less than 6 and not 0\n");
}
return (0);
}
