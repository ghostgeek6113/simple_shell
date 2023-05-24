//
// Created by Ghost Geek on 22/05/2023.
//
#include "our_shell.h"

/**
 * our_strcat - Function to concatenate 2 strings
 * @first_string: First string
 * @second_string: Second string
 * Return: Resulting string ending with a null character
 */

char *our_strcat(char *first_string, char *second_string)
{
	char *resulting_string = first_string;

	while(*second_string != '\0')
		second_string++;

	while (*first_string != '\0')
		*second_string++ = *first_string++;
	*second_string = '\0';

	return resulting_string;
}
