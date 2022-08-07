#include "main.h"

/**
 * print_string - print the string
 * @string: parameter member
 * Return: string
 */

int print_string(char *string)
{
	int count = 0, i;

	for (i = 0; string[i] != '\0'; i++)
	{
		count += _putchar(string[i]);
	}
	return (count);
}
