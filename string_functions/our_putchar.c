#include <unistd.h>
#include "our_shell.h"

/**
* our_putchar - Function to print a single character
* similar to _putchar system call in C.
* @c: Character to be printed
* Return: 1 if successful or -1 if failed
*/

int our_putchar(char c)
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
	return 1;
}