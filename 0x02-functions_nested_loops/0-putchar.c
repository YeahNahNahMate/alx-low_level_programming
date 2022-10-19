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
	char wrd[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	for (i = 0 ; i < 8 ; i++)
	{
		putchar(wrd[i]);
	}
	return (0);
}i
