//
// Created by Ghost Geek on 24/05/2023.
//
#include "our_shell.h"

/**
* our_set_alias - Function to set a string as an alias to
 * a command
 * @status: Status of the shell
 * @s: String to be setas alias
 * Return: 0 if success, 1 if not
*/

int our_set_alias(status_t *status, char *s)
{
	char *sign;
	
	sign = our_strchr(s, '=');

	if (sign == NULL)
		return (1);

	if (*++sign == '\0')
		return (our_unset_alias(status, s));

	our_unset_alias(status, s);
	return (add_node_end(&(status->alias), s, 0) == NULL);
}