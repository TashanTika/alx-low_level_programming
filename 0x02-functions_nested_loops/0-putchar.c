#include "main.h"

/**
* _putchar- writes the charcter c to the stdout
* @c: The charcter to print
*
* Return: On success 1.
* On erro, -1 is returned, and eerno is set approproately.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
