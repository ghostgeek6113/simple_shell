//
// Created by Ghost Geek on 24/05/2023.
//
#include "our_shell.h"
/**
* unset_env - Function to delete an environment variable
* @status: Status of the shell
* Return: Always 0 
 */
int unset_env(status_t *status) 
{
	int i;
	if (status->argc == 1) {
		our_error_put("Few arguments are given.\n");
		return (1); }
	for (i = 1; i <= status->argc; i++)
		our_unset_env(status, status->argv[i]);
	return (0); 
}