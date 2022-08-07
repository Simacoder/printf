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

	for (i = 0; format[i] != '%' && format[i] != '\0'; i++)
	{
		count += _putchar(format[i]);
		return (count);
	}
}
