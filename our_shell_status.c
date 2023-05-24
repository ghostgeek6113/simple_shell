#include "our_shell.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <unistd.h>

/**
* shell_status - Function to check shell status and
* confirm if the shell is in interactive mode or not
* @status: Struct holding the information regarding the
* status of the shell
* Return: 1 if the shell is interactive mode and 0 otherwise
*/

int our_shell_status(status_t *status)
{
	int stdin_is_tty = isatty(STDIN_FILENO);
	int valid_read_file_descriptor = (status->read_file_descriptor >= 0 && status->read_file_descriptor <= 2);
	return (stdin_is_tty && valid_read_file_descriptor);
}