//
// Created by Ghost Geek on 23/05/2023.
//
#include "our_shell.h"
#include <unistd.h>

/**
* our_replace_vars - Function to replace variable names
* and effectively modify them from the status
* @status: status of the shell
* Return: 1 if success, 0 if failed
*/

int our_replace_vars(status_t *status)
{
	llist_t *var_node;
	int i = 0;

	for (i = 0; status->argv[i]; i++)
	{
		if(!our_strcmp(status->argv[i], "$$"))
		{
			our_replace_string(&(status->argv[i]), our_strdup(our_convert_number(getpid(), 10,0)));
			continue ;
		}
		if(!our_strcmp(status->argv[i], "$?"))
		{
			our_replace_string(&(status->argv[i]), our_strdup(our_convert_number(status->status, 10,0)));
			continue ;
		}
		if (status->argv[i][0] != '$' || !status->argv[i][1])
			continue ;
	}
}