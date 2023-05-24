#include "our_shell.h"

/**
 * print_error - prints an error message
 * @status: the parameter & return info struct
 * @estr: Error to print
 * Return: 0 if success, -1 if failed
*/
void print_error(status_t *status, char *estr) {
    our_put(status->file_name);
    our_put(": ");
//    print_d(status->line_count, STDERR_FILENO);
    our_put(": ");
    our_put(status->argv[0]);
    our_put(": ");
    our_put(estr);
}