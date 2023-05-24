#include "our_shell.h"

/**
* our_isalpha - Function to check if a character of value c is an alphabetic
* character for security and parsing purposes
* @s: Integer value of a character
* Return: 1 if true, 0 otherwise
*/

int our_isalpha(int s)
{
    return ((s >= 'a' && s <= 'z') || (s >= 'A' && s <= 'Z'));
}

