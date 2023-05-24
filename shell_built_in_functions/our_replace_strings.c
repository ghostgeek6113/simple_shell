//
// Created by Ghost Geek on 23/05/2023.
//
#include "our_shell.h"

/**
* our_replace_string - Function to replace an string
 * by another one
 * @old_string: Old string
 * @new_string: New String
 * Return: 1 if success, 0 if failed
*/

int our_replace_string(char **old_string, char *new_string)
{
	free(*old_string);
	*old_string = new_string;
	return (1);
}