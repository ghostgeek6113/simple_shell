#include "our_shell.h"

/**
 * our_strncat - Function to concatenate 2 given strings
 * with n as the number of character from the first string
 * to be added at the end of the second_string
 * @first_string: String to split and concatenate
 * @second_string: String to concatenate
 * @n: Number of characters
 * Return:
*/

char *our_strncat(char *first_string, char *second_string, int n)
{
	char* result = first_string;

	while (*first_string != '\0')
		first_string++;

	while (*second_string != '\0' && n > 0)
	{
		*first_string = *second_string;
		first_string++;
		second_string++;
		n--;
	}

	*first_string = '\0';
	return (result);
}