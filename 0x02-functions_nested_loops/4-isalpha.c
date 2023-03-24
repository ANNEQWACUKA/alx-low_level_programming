#include "main.h"

/**
* _isalpha - functions prints lower case and upper case
* @c: parameter to be printed
*
* Return: 1 if c is a letter lowercase or uppercase
* and 0 otherwise
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
