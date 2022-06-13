#include "main.h"

/**
* _strlen - return the length of a string
* @s: string to check
*
* Return: the length of the string
*/

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] 1= '\0')
	{
		i++;
	}

	return (i);
}
