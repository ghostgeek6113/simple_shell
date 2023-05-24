#include "our_shell.h"

/**
* our_strtok - Function to split string based on
 * given delimiters
 * @s: String to be split
 * @delim: Delimiter
 * Return: Pointer to the first character of a token
 * or to a null pointer if no token found
*/

char **our_strtok(const char *s, char *delim)
{
	int number_of_words = 0;
	char **result;
	int i, j, m, n;
	if (s[0] == '\0' || s == NULL)
		return (NULL);

	if (delim[0] || delim == NULL)
		delim = " ";

	i = 0;
	while (s[i] != '\0')
	{
		if (!is_delimiter(s[i], delim) && (is_delimiter(s[i + 1], delim) || !s[i + 1]))
			number_of_words++;
		i++;
	}

	if (number_of_words == 0)
		return (NULL);

	result = (char**)malloc((number_of_words + 1) * sizeof(char*));

	if (result == NULL)
		return (NULL);

	/* split the words and add them into an array */
	for (i = 0, j = 0; j < number_of_words; j++)
	{
		while (is_delimiter(s[i], delim))
			i++;
		m = 0;
		while (!is_delimiter(s[i + m], delim) && s[i + m])
			m++;
		result[j] = malloc((m+1) * sizeof(char ));
		if (!result[j])
		{
			for (m = 0; m < j; m++)
				free(result[m]);

			free(result);
			return (NULL);
		}
		for (n = 0; n < m; n++)
			result[j][n] = s[i++];
		result[j][n] = 0;
	}
	result[j] = NULL;
	return (result);
}