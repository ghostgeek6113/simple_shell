#include "our_shell.h"

/**
* our_strtow - Function to split string based on
* given delimiter
 * @s: String
 * @delim: delimiter
 * Return: Pointer to the first character of a token
* or to a null pointer if no token found
*/

char **our_strtow(const char *s, char delim)
{
	int number_of_words = 0;
	char **result;
	int i, j, m, n;

	if (s[0] == '\0' || s == NULL)
		return (NULL);

	i = 0, j = 0, m = 0, n = 0;

	while (s[i] != '\0')
	{
		if (s[i] != delim && (s[i + 1] == delim || s[i + 1] == '\0'))
			number_of_words++;
		i++;
	}

	if (number_of_words == 0)
		return (NULL);

	result = (char**)malloc((number_of_words + 1) * sizeof(char*));

	if (result == NULL)
		return (NULL);

	while (j < number_of_words)
	{
		while (s[i] == delim && s[i] != '\0')
			i++;

		m = 0;

		while (s[i + 1] != delim && s[i + m] && s[i+m] != delim)
			m++;

		result[j] = (char*) malloc((m + 1) * sizeof(char));

		/* free memory if there is nothing and return NULL */
		if (result[j] == NULL)
		{
			for (m = 0; m < j; m++)
				free(result[m]);
			free(result);
			return (NULL);
		}
		for (n = 0; n < m; n++)
			result[j][n] = s[i++];
		result[j][n] = 0;
		j++;
	}
	result[j] = NULL;
	return (result);
}