#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - function that produces output according to a format
 * @format: parameter member
 * Return: counter succes
 */

int _printf(const char *format, ...)
{
	int count, i = 0;
	va_list info;

	va_start(info, format);

	for (i = 0; format[i] != '\0'; )
	{
		if (format[i] != '%')
		{
			count = count + _putchar(format[i]);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] != ' ')
		{
			switch (format[i + 1])
			{
				case 'c':
					count += _putchar(va_arg(info, int));
					break;
				case 's':
					count += print_string(va_arg(info, int));
					break;
				case '%':
					count += _putchar('%');
					break;
				case 'd':
					count += print_decimal(va_arg(info, int));
					break;
				case 'i':
					count += print_decima(va_arg(info, int));
					break;
				default:
					break;
			}

			i += 2;
		}
	}
	return (count);
}
