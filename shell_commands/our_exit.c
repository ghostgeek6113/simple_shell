#include "our_shell.h"

/**
* our_exit - Function to exit our shell
* @status: Struct holding the information regarding the
* status of the shell
* Return:
*/

int our_exit(status_t *status)
{
	int exit_code = 0;

	if (status->argv[1] != NULL)
	{
		/* using our custome strtol to convert the status*/
		exit_code = our_error_atoi(status->argv[1]);
		if (exit_code == -1)
		{
			/* Set the status to error */
			status->status = 2;
			our_error_print(status, "Number not allowed: ");
			our_error_put(status->argv[1]);
			our_error_putchar('\n');
			return (1);
		}
		status->error_number = our_error_atoi(status->argv[1]);
		return (-2);
	}
}