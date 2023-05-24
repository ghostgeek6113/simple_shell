//
// Created by Ghost Geek on 24/05/2023.
//
#include "our_shell.h"

/**
 * add_to_env - Function to add elements in
 * the env
 * @status: Status of the shell
 * Return: 0
 */
 
int add_to_env(status_t *status)
{
	llist_t *node = NULL;
	size_t i;
	
	for (i = 0; environ[i]; i++)
		add_node_end(&node, environ[i], 0);
	status->env = node;
	return (0);
}
