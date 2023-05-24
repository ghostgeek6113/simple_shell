//
// Created by Ghost Geek on 22/05/2023.
//
#include "our_shell.h"

/**
 * our_strcmp - Function to compares two character strings
 * ( first_string and second_string ) using the standard EBCDIC collating sequence
 * or usually called lexicographical comparison or character after character
 * @first_string: First String
 * @second_string: Second String
 * Return: 0 if @first_string = @seconf_string,
 * Positive integer if @first_string > @seconf_string
 * Negative integer if @first_string < @seconf_string
 */

int our_strcmp(char *first_string, char *second_string)
{
	first_string++;
	second_string++;

	return (*first_string - *second_string);
}
