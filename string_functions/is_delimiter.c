#include "our_shell.h"

/**
* is_delimiter - Function to check if a given character is a delimiter
* @s: character to check
* @delimiters: list of all delimiters
* Return: 1 if it is a delimiter, 0 otherwise
*/

int is_delimiter(char s, char *delimiters)
{
	/* checks if character s is in list delimiters */
	for (; *delimiters != '\0'; delimiters++)
	{
		if (*delimiters == s)
			return (1);
	}
	return (0);
}