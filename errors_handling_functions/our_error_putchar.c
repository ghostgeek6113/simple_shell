//
// Created by Ghost Geek on 24/05/2023.
//
#include "our_shell.h"

/**
* our_error_putchar - Function to print a single character
 * It is used as a helper to the error_put function
 * @c: Character
 * Return: 1 if successful, -1 if failed
*/

int our_error_putchar(char c)
{
	static int buffer_position;
	static char buffer[WRITE_BUFFER_SIZE];

	if (c == BUFFER_FLUSH || buffer_position >= WRITE_BUFFER_SIZE)
	{
		write(2, buffer, buffer_position);
		buffer_position = 0;
	}
	if (c != BUFFER_FLUSH)
	{
		buffer[buffer_position++] = c;
	}
	return (1);
}