//
// Created by Ghost Geek on 23/05/2023.
//
#include "our_shell.h"

/**
 * our_get_env - Function to get the value of a given
 * environment variable
 * @status: Status of the shell
 * @var: Variable name
 * Return: var's value
 */

char* our_get_env(status_t *status, const char *var)
{
	char *value;
	llist_t *node = status->env;

	while (node)
	{
		value = our_is_substring(node->str, var);
		if (value && *value)
			return (value);
		node = node->next;
	}
	return (NULL);
}
