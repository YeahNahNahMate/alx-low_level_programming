#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Description: Prints alphabets in lowercase.
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}

