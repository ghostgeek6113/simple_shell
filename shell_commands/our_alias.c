//
// Created by Ghost Geek on 23/05/2023.
//
#include "our_shell.h"

/**
 * our_alias - Functions to alias command and give them new names
 * @status: Status of the shell
 * Return: 0
 */

int our_alias(status_t *status)
{
	char *sign = NULL;
	int index;
	llist_t *node = NULL;
	
	if (status->argc == 1)
	{
		node = status->alias;
		while (node)
		{
			our_print_alias(node);
			node = node->next;
		}
		return (0);
	}
	for (index = 1; status->argv[index]; index++)
	{
		sign = our_strchr(status->argv[index], '=');
		if (sign)
			our_set_alias(status, status->argv[index]);
		else
			our_print_alias(node_starts_with(status->alias, status->argv[index], '='));
	}
	return 0;
}
