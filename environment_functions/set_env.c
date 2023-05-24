//
// Created by Ghost Geek on 24/05/2023.
//
#include "our_shell.h"

/**
 * set_env - Function to set a new env variable
 * @status: Status of the shell
 * return: 0
 */

int set_env(status_t *status)
{
	if (status->argc != 3)
	{
		our_error_put("Number of arguments is incorrect\n");
		return (1);
	}
	if (our_set_env(status, status->argv[1], status->argv[2]))
		return (0);
	return (1);
}
