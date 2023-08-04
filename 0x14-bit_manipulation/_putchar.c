#include "main.h"
#include <unistd.h>
/**
 * _putchar - show the character c to stdout
 * @c:is a  character to print
 *
 * Return: On success 1.
 * On error, -1 is retur, and if not error  is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

