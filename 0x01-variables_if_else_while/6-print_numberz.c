#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints to nine.
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int num;

	for (num = '0' ; num <= '9' ; num++)
	{
		putchar((num % 10) + '0');
	}
	putchar("\n");
	return (0);
}
