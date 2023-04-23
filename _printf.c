#include "main.h"

int _printf(const char *format, ...)
{
	int i = 0;

	while (format[i] != '\0')
	{
		_putchar(format[i]);
		i++;
	}


return(0);
}
