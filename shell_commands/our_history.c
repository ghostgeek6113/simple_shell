//
// Created by Ghost Geek on 23/05/2023.
//
#include "our_shell.h"

/**
* our_history - Function to show the history of commands
 * @status: Status of shell
 * Return: 0
*/

int our_history(status_t *status)
{
	print_values(status->history);
	return (0);
}