#include <stdio.h>

/**
 * main - Prints combination of single digit numbers
 *
 * Description: Numbers separated by commas
 * can only use putchar four times
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
