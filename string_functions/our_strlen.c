//
// Created by Ghost Geek on 22/05/2023.
//
#include "our_shell.h"

/**
 * our_strlen - Function to get the length of a given string
 * @s: String
 * Return: Length of the string s or 0 if no string
 */

int our_strlen(const char *s)
{
    int length = 0;

    if (s == NULL)
        return (0);

    while (s[length] != '\0')
        length++;

    return (length);
}
