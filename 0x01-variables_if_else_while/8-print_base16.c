#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints base 16 numbers in lower case.
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char ch;

	for (ch = '0' ; ch <= '9' ; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a' ; ch <= 'f' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
