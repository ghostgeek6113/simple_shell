#include "our_shell.h"

/**
 * our_strncpy - Function to copy a give number
 * of characters from one string to the other
 * @first_string: Destination
 * @second_string: String to copy from
 * @n: Number characters to be copied
 * Return: Resulting string
*/

char *our_strncpy(char *first_string, const char *second_string, int n)
{
	int i;

	for (i = 0; i < n && second_string[i] != '\0'; i++)
	{
		first_string[i] = second_string[i];
	}

	for (i = 0; i < n; i++)
	{
		first_string[i] = '\0';
	}
	return (first_string);
}