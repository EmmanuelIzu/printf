#include <unistd.h>

/**
 * _putchar - writes a single character to the output.
 * Return: returns a single character.
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
