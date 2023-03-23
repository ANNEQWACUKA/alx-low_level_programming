#include <stdio.h>
/**
*main - main function
*
* Return: always 0
*/

int main(void)
{
	printf("The size of an int is: %lu byte(s)", sizeof(int));
	printf("The size of an char is: %lu byte(s)", sizeof(char));
	printf("The size of an long int is: %lu byte(s)", sizeof(long int));
	printf("The size of an long long int is: %lu byte(s)", sizeof(long long int));
	printf("The size of an float is: %lu byte(s)", sizeof(float));
	return (0);
}	
