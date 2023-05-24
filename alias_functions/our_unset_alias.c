//
// Created by Ghost Geek on 24/05/2023.
//
#include "our_shell.h"

/**
* our_unset_alias - Function to set alias to the
 * default
 * @status: Status of the shell
 * @s: Alias to set back to default
 * Return: 0 if success, 1 if not
*/

int our_unset_alias(status_t *status, char *s)
{
	char *sign, c;
	int return_value;
	
	sign = our_strchr(s, '=');

	if (sign == NULL)
		return (1);
	c = *sign;
	*sign = 0;
	return_value = delete_node_at_index(&(status->alias),get_node_index(status->alias, node_starts_with(status->alias, s, -1)));
	*sign = c;

	return (return_value);
}