#include "main.h"

/**
* print_alphabet_x10 - function that prints alphabet in lower case 10 times
*
* Return: always 0
*/
void print_alphabet_x10(void)
{
	char j;
	int i;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (j = 'a' ; j <= 'z' ; j++)
			_putchar(j);
		_putchar('\n');
	}
}
