//
// Created by Ghost Geek on 23/05/2023.
//
#include "our_shell.h"

/**
* our_cd - Function to change directory in shell
 * @status: Status of the shell
 * Return: 0
*/

int our_cd(status_t *status)
{
	char *current, *destination, buffer[1024];
	int return_value;

	current = getcwd(buffer, 1024);

	if (!current)
		our_put("TODO: >>failure error message<<\n");
	if (status->argv[1])
	{
		destination = our_get_env(status, "HOME=");
		if (!destination)
			return_value = chdir((destination = our_get_env(status, "PWD=")) ? destination:"/");
		else
			return_value = chdir(destination);
	}
	else if (our_strcmp(status->argv[1],"_") == 0)
	{
		if (!our_get_env(status,"OLDPWD="))
		{
			our_put(current);
			our_putchar('\n');
			return (1);
		}
		our_put(our_get_env(status, "OLDPWD="));
		our_putchar('\0');
		return_value = chdir((destination = our_get_env(status,"OLDPWD=")) ? destination:"/");
	}
	else
		return_value = chdir(status->argv[1]);
	if (return_value == -1)
	{
		our_error_print(status, "can't cd to ");
		our_error_put(status->argv[1]), our_error_putchar('\n');
	}
	else
	{
		our_set_env(status, "OLDPWD", our_get_env(status, "PWD="));
		our_set_env(status, "PWD", getcwd(buffer, 1024));
	}
	return (0);
}