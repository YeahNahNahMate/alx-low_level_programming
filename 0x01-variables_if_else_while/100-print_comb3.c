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
	int lt = 0;
	int sma = 1;

	while (ft <= 9)
	{
		while (lt <= 9)
		{
			if (ft <= lt)
			{
				if (sma == 0)
				{
					putchar(',');
					putchar(' ');
				}
				sma = 0;
				putchar(ft + '0');
				putchar(lt + '0');
			}
			lt++;
		}
		ft++;
		lt = 0;
	}
	putchar('\n');
	return (0);
}
