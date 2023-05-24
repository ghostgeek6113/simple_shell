#include "our_shell.h"

/**
 * our_strchr - Function to get the first occurrence of a character
 * in a given string
 * @s: String to loop through
 * @c: character to find
 * Return: Position where c is found in s
*/

char *our_strchr(char *s, char c)
{
	while (*s != c)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}