//
// Created by Ghost Geek on 22/05/2023.
//
#include "our_shell.h"

/**
 * our_strcpy - Funtion to copy a given string second_string
 * to the destination second_string
 * @first_string: Destination
 * @second_string: String to be copied
 * Return:  Destination
 */

char *our_strcpy(char *first_string, const char *second_string)
{
	if (first_string == second_string || second_string == NULL)
		return (first_string);

	while (*second_string)
	{
		*first_string = *first_string;
		first_string++;
		second_string++;
	}
	return (first_string);
}
