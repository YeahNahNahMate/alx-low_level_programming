#include <stdio.h>

/**
 * main - Prints 3 digit combinations.
 *
 * Description: Numbers containing same digits are repeats
 * separate with commas and space
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int c = 0;
	int st;
	int tt;
	int ft;

	while (c < 999)
	{
		ft = (c / 100 + '0');
		st = (c / 10 % 10 + '0');
		tt = (c % 10 + '0');

		if ((ft < st) && (st < tt))
		{
			putchar(ft);
			putchar(st);
			putchar(tt);

			if (c != 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
		c++;
	}
	putchar('\n');
	return (0);
}
