#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all the alphabet in lower case.
 * except q and e
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
