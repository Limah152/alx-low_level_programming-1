#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	n = n % 10;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
        printf("Last digit of %d is %d ", and is greater than 5\n" );
	if (n % 10 > 5)
		printf("and is greater than 5\n");
 if (n % 10 == 0)
		printf("and is 0\n");
	if (n % 10 < 6 && n % 10 != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}
