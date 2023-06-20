#include "main.h"

/**
 * print_sign - outputs the sign of a number
 * @n: the int to verify
 * Return: 1 and outputs + if n is greater than zero
 * 0 and outputs 0 if n is zero
 * -1 and outputs - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	} 
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
