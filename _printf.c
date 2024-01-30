#include "main.h"

/**
 * _printf - a function that produces output according to a format
 * @format: format to which agument will be printed
 * Return: Number of characters printed
 */

int _printf(const char *format, ...)
{
        int y = 0;
        va_lists args;

        if(format == NULL)
                return (-1);

        va_start(args, format);
	
	while (*format)
	{
		if (*format != '%')
		{
			write(i, format, i);
		}
		format++;
	}

	return (y);
}
