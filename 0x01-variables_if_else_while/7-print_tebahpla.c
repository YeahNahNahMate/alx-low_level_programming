#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints alphabet in reverse.
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char ltr;

	for (ltr = 'z' ; ltr >= 'a' ; ltr--)
	{
		putchar(ltr);
	}
	putchar('\n');
	return (0);
}
