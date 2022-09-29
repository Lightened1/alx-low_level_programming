#include "main.h"

/**
* _strlen_recursion - calculates the length of a string
* @s: string to be used
*
* Return: length of the string
*/

int _strlen_recursion(char *s)
{
	int AMI = 0;

	if (*s != '\0')
	{
		AMI++;
		AMI += _strlen_recursion(s + 1);
	}

	return (AMI);
}
