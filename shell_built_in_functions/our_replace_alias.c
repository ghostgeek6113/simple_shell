//
// Created by Ghost Geek on 23/05/2023.
//
#include "our_shell.h"

/**
* our_replace_alias - Function to replace aliases
 * and effectively modify them from the status
 * @status: status of the shell
 * Return: 1 if success, 0 if failed
*/

int our_replace_alias(status_t* status)
{
	char *alias;
	llist_t *alias_node;
	alias_node = node_starts_with(status->alias, status->argv[0], '=');

	if (!alias_node)
		return (0);

	free(status->argv[0]);
	alias = our_strchr(alias_node->str, '=');

	if (!alias)
		return (0);

	alias++;
	alias = our_strdup(alias);
	if (!alias)
		return (0);

	status->argv[0] = alias;
	return (1);
}