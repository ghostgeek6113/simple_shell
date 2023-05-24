//
// Created by Ghost Geek on 23/05/2023.
//
#include "our_shell.h"

/**
 * our_is_chain - Function to check if a character
 * is a chaining character
 * @status: current status of shell
 * @c: characters in the buffer
 * @index: Current index in the buffer
 * Return: 1 if chaining character, 0 if not
 */

int our_is_chain(status_t *status, char *c, const size_t *index)
{
	size_t i = *index;

	if (c[i] == ';')
	{
		c[i] = '\0';
		status->cmd_buffer_type = CMD_CHAIN;
	}
	else if (c[i] == '|' && c[i + 1] == '&')
	{
		c[i] = '\0';
		i++;
		status->cmd_buffer_type = CMD_OR;
	}
	else if (c[i] == '&' && c[i + 1] == '&')
	{
		c[i] = '\0';
		i++;
		status->cmd_buffer_type = CMD_AND;
	}
	else
		return (0);
	return (1);
}
