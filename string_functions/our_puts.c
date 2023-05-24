#include "our_shell.h"

/**
* our_puts - Function to print a single character
* similar to _puts function in C.
* @str: Character to be printed
*/

void our_put(char *str)
{
	if (str != NULL)
	{
		size_t index = 0;
		while (str[index] != '\0')
		{
			our_putchar(str[index]);
			index++;
		}
	}
}