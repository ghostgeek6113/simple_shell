//
// Created by Ghost Geek on 23/05/2023.
//
#include "our_shell.h"

/**
 * our_set_env - Function to set a new env variable
 * @status: Status of the shell
 * return: 0
 */

int our_set_env(status_t *status)
{
	if (info->argc != 3)
	{
		_eputs("Incorrect number of arguements\n");
		return (1);
	}
	if (_setenv(info, info->argv[1], info->argv[2]))
		return (0);
	return (1);
}
