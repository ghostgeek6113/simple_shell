//
// Created by Ghost Geek on 24/05/2023.
//

#include "our_shell.h"

/**
* our_put_fd - Function that write a given string
* to the given file descriptor
* @s: String
* @file_descriptor: File descriptor
* Return: 1 if successful or -1 if failed
*/

int our_put_fd(char *s, int file_descriptor)
{
	int count = 0;

	if (!s)
		return 0;

	while (*s) {
		count += our_putchar_fd(*s++, file_descriptor);
	}

	return count;
}
