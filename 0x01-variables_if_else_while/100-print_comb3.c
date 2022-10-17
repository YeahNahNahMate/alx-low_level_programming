#include <stdio.h>

/**
 * main - Prints all possible 2 digit combination.
 *
 * Description: Print only the smallest pair combination
 * separated by comma and space
 * digits cannot repeated.
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int ft = 0;
	int lt;
	int c = 0;

	while (c <= 99)
	{
		ft = (c / 10 + '0');
		lt = (c % 10 + '0');

		if (ft < lt)
		{
			putchar(ft);
			putchar(lt);

			if (ft != '8' || lt != '9')
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
