//
// Created by Ghost Geek on 22/05/2023.
//
#include "our_shell.h"

/**
 * our_strdup - Function to duplicate a given string
 * @s: String to be duplicated
 * Return: Pointer to the null terminated duplicate string
 * or NULL if there is no string
*/

char *our_strdup(const char *s)
{
	char *result;
	int length = 0;

	if (s == NULL)
		return (NULL);

	while(s[length])
		length++;

	result = malloc(sizeof(char) * (length + 1));
	if (result == NULL)
		return (NULL);

	for (length++; length--;)
		result[length] = *--s;

	return result

}