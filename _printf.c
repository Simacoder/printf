#include "main.h"

void print_buffer(char buffer[], int *buff_ind);

/**
<<<<<<< HEAD
 * _printf - function that produces output according to a format
 * @format: parameter member
 *
 * Return: printed char
=======
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
>>>>>>> 090493df99797b90dfaab0c78922d5694c79b6c3
 */
int _printf(const char *format, ...)
{
<<<<<<< HEAD
	int i, count = 0, counted_char = 0;
	int flags, witdth, presicion, size, buff_ind = 0;
	va_list info;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(info, format);
=======
	int i, printed = 0, printed_chars = 0;
	int flags, width, precision, size, buff_ind = 0;
	char buffer[BUFF_SIZE];
	va_list list;

	if (format == NULL)
		return (-1);
	va_start(list, format);
>>>>>>> 090493df99797b90dfaab0c78922d5694c79b6c3
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[buff_ind++] = format[i];
			if (buff_ind == BUFF_SIZE)
				print_buffer(buffer, &buff_ind);
<<<<<<< HEAD
			counted_char++;
=======
		/* write(1, &format[i], 1);*/
			printed_chars++;
>>>>>>> 090493df99797b90dfaab0c78922d5694c79b6c3
		}
		else
		{
			print_buffer(buffer, &buff_ind);
			flags = get_flags(format, &i);
<<<<<<< HEAD
			width = get_width(format, &i, info);
			precision = get_precision(format, &i, info);
			size = get_size(format, &i);
			++i;
			counted handle_print(format,&i,info, buffer,
					flags, width, precision, size);
			if (counted == -1)
				return (-1);
			counted_char += counted;
		}
	}

	print_buffer(buffer, &buff_ind);

	va_end(info);

	return (counted_char);
}

/**
 * print_buffer - prints the contents of thebuffer if it exist
 * @buffer: array of chars
 * @buf_ind: index at which to add next char
 */
void print_biffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);

=======
			width = get_width(format, &i, list);
			precision = get_precision(format, &i, list);
			size = get_size(format, &i);
			++i;
			printed = handle_print(format, &i, list, buffer,
					flags, width, precision, size);
			if (printed == -1)
				return (-1);
			printed_chars += printed;
		}
	}
	print_buffer(buffer, &buff_ind);
	va_end(list);
	return (printed_chars);
}
/**
 * print_buffer - Prints the contents of the buffer if it exist
 * @buffer: Array of chars
 * @buff_ind: Index at which to add next char, represents the length.
 */
void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);
>>>>>>> 090493df99797b90dfaab0c78922d5694c79b6c3
	*buff_ind = 0;
}
