#include <unistd.h>

/**
 * _putchar - function to writ out std
 * @c: paramemter mber
 * Return: succes 1 and error -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
