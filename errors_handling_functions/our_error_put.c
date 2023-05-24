//
// Created by Ghost Geek on 24/05/2023.
//
#include "our_shell.h"

/**
 * our_error_put - Function to print error in a given
 * way
 * @s: Error to print
 * Return: void
 */

void our_error_put(char *s)
{
	int index = 0;

	if (!s)
		return;
	while (s[index] != '\0')
	{
		our_error_putchar(s[index]);
		index++;
	}
}
