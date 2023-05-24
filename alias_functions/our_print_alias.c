//
// Created by Ghost Geek on 24/05/2023.
//
#include "our_shell.h"

/**
 * our_print_alias - Function to print a command and its
 * alias
 * @node: Structure of alias and command
 * Return: 0 on success
 */

int our_print_alias(llist_t *node)
{
	char *sign, *alias;

	if (node)
	{
		sign = our_strchr(node->str, '=');
		alias = node->str;

		for (; alias <= sign; alias++)
			our_putchar(*alias);
		our_putchar('\'');
		our_put(sign + 1);
		our_put("'\n");
		return (0);
	}
	return (1);
}
