#include <stdio.h>

/**
 * Prints all possible combinations of single-digit numbers
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 28; n < 38; n++)
	{
		putchar(n);
		if (n != 37)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
