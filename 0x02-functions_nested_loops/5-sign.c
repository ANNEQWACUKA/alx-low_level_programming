#include "main.h"

/**
* print_sign - functions prints sign of a number
*
* @n: sign to be printed
* Return: 1 if n is > than 0
* and 0 if n is == to zero
* and -1 if n < than 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar('.');
		_putchar(' ');
		return (-1);
	}
}
