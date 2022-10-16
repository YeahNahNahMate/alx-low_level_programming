#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single numbers of base 10.
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int num;

	while (num < 10)
	{
		printf("%d", num);
		num = num + 1;
	}
	printf('\n')
	return (0);
}
