#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the word _putchar to screen
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int i;
	char wrd[9] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'}

	for (i = 0; i < 9; i++)
	{
		putchar(wrd[i]);
	}
	putchar('\n');
	return (0);
}
