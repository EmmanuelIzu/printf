#include "main.h"
#include <stdarg.h>
/**
 * check_person - check for %
 * @c: character to be checked
 * Return: return i;
 */
int check_person(char c)
{
	int i = 0;

	if (c == '%')
		return (i = 1);
return (i);
}


/**
 * _printf - prints output to thr o
 * @format: a variadic argument
 * Return: Return an interger
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;

	if (format)
	{

	va_start(args, format);

	while (format[i] != '\0')
	{
		_putchar(format[i]);
		i++;
	}

	}
return (0);
}
