#include "main.h"

/**
 * get_flags - Calculates active flags
 * @format: Formatted string in which to print the arguments
 * @i: take a parameter.
 * Return: Flags:
 */
int get_flags(const char *format, int *i)
{
	/* - + 0 # ' ' */
	/* 1 2 4 8  16 */
	int j, current_value;
	int flags = 0;
	const char FLAGS_CHARACTER[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAGS_ARRAY[] = {FUNCTION_MINUS, FUNCTION_PLUS, FUNCTION_ZERO, FUNCTION_HASH, FUNCTION_SPACE, 0};

	current_value = *i + 1; 
	while (format[current_value] != '\0')
	{
		for (j = 0; FLAGS_CHARACTER[j] != '\0'; j++)
			if (format[current_value] == FLAGS_CHARACTER[j])
			{
				flags |= FLAGS_ARRAY[j];
				break;
			}

		if (FLAGS_CHARACTER[j] == 0)
			break;
	current_value++;
	}

	*i = current_value - 1;

	return (flags);
}

