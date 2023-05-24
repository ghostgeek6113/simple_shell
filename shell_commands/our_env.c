//
// Created by Ghost Geek on 24/05/2023.
//
#include "our_shell.h"

/**
* our_env - Function that returns the current
 * environment
 * @status: Status of the shell
 * Return: 0
*/

int our_env(status_t *status)
{
	print_values(status->env);
	return (0);
}