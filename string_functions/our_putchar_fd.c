//
// Created by Ghost Geek on 24/05/2023.
//
#include "our_shell.h"

/**
 * our_putchar_fd - Function that write a given character
 * to the given file descriptor
 * @c: character
 * @file_descriptor: File descriptor
 * Return: 1 if successful or -1 if failed
 */

int our_putchar_fd(char c, int file_descriptor)
{
	static int buffer_position;
	static char buffer[WRITE_BUFFER_SIZE];

	if (c == BUFFER_FLUSH || buffer_position >= WRITE_BUFFER_SIZE)
	{
		write(file_descriptor, buffer, buffer_position);
		buffer_position = 0;
	}
	if (c != BUFFER_FLUSH)
	{
		buffer[buffer_position++] = c;
	}
	return 1;
}


