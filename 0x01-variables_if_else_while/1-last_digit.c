#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int L;
char str[] = "Last digit of";
srand(time(0));
n = rand() - RAND_MAX / 2;
L = n % 10;
if (L > 5)
{
printf("Last digit of %d is %d and is greater 5\n", n, lastn);
}
else if (L == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastn);
}
else if (L < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastn);
}
return (0);
}
