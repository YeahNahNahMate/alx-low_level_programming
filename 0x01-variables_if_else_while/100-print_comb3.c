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
	int coma = 1;

	while (ft <= 9)
	{
		lt = ft + 1;

		while (lt <= 9)
		{
			putchar(ft);
			putchar(lt);

			if (ft != 8 || lt != 9)
			{
				putchar(',');
				putchar(' ');
			}
			lt++;
		}
		ft++;
	}
	putchar('\n');
	return (0);
}
