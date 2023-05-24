//
// Created by Ghost Geek on 23/05/2023.
//

#include "our_shell.h"

/**
 * our_check_chain - Function to check the status
 * to know if we should chain or not
 * @status: Status of shell
 * @c: characters in the buffer
* @index: Current index in the buffer
 * @i: Starting point in the buffer
 * @buffer_size: Size of the buffer
* Return: void
 */

void our_check_chain(status_t *status, char *c, size_t *index, size_t i,
					 size_t buffer_size)
{
	size_t p = *index;

	if (status->cmd_buffer_type == CMD_OR && !status->status)
	{
		c[i] = 0;
		p = buffer_size;
	}

	if (status->cmd_buffer_type == CMD_AND && !status->status)
	{
		c[i] = 0;
		p = buffer_size;
	}

	*index = p;
}
