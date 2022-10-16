#include <stdlib.h>
#include <time.h>

/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry to main function.
 *
 * Description: Prints the last random number.
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int n;
	int last_d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	last_d = n % 10;

	if (last_d > 5)
	{
		printf("Last digit of %d is %d and greater thab 5\n", n, last_d);
	}
	else if (last_d == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_d);
	}
	else
	{
		printf("Last digit of %d is %d and less than 6 and not 0\n", n, last_d);
	}
	return (0);
}
