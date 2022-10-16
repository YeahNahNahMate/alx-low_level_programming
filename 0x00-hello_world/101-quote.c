#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints a text to stadard error.
 *
 * Return: 1 to end program
 */

int main(void)
{
	char n[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fprintf(stderr, "%s\n", n);

	return (1);
}
