#include "main.h"

/**
 * print_decimal - prints decimal values
 * @value: value to be prented
 *
 * Return: count
 */
int print_decimal(int value)
{
	int count = 0;

	if (value < 0)
	{
		count += _putchar('-');
		value = value * -1;
	}

	if (value / 10)
		count += print_decimal(value / 10);

	count += _putchar(value % 10 + '0');

	return (count);
}
