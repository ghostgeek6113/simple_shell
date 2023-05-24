#include "our_shell.h"

/**
* our_atoi - Function to convert given strings into numbers
* @s: String to be converted
* Return: Number equivalent to the string or 0 if there is no string
*/

int our_atoi(char *s)
{
	int sign = 1, integer = 0;

	while (*s == ' ' || *s == '\t')
		s++;

	/* check if the number is positive or negative */
	if (*s == '-')
	{
		sign = -1;
		s++;
	}

	else if (*s == '+')
	{
		s++;
	}

	/** 
	* loop through all the characters then
	* multiply it by 10 and add the value of the current digit
	*/
	while (*s >= '0' && *s <= '9')
	{
		integer = integer * 10 + (*s - '0');
		s++;
	}
	return (integer);
}