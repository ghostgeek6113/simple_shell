//
// Created by Ghost Geek on 22/05/2023.
//
#include "our_shell.h"

/**
 * our_is_substring - Function to check if a second_string is
 * a substring of first_string
 * @first_string: String to loop through
 * @second_string: Substring to check
 * Return: NULL if not substring,
 * otherwise, address of character after @second_string
 */
char *our_is_substring(const char *first_string, const char *second_string)
{
	while (*second_string)
	{
		if (*first_string == '\0' || *first_string++ != *second_string++)
			return NULL;
	}
	return ((char *) first_string);
}

