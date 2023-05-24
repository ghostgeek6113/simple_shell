#ifndef OUR_SHELL_H
#define OUR_SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <sys/wait.h>
#include <limits.h>
#include <sys/types.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stddef.h>
#include <unwind.h>
#include <unistd.h>


#define READ_BUFFER_SIZE 1024
#define WRITE_BUFFER_SIZE 1024
#define BUFFER_FLUSH (-1)
#define CMD_NORM	0
#define CMD_OR		1
#define CMD_AND		2
#define CMD_CHAIN	3

extern char **environ;
/**
 * struct linked_list - Single linked list made of a string
 * @index: Index of element
 * @str: String value
 * @next: Pointer to the next node
*/
typedef struct linked_list {
    int index;
    char *str;
    struct linked_list *next;
} llist_t;

/**
 * struct status - Structure containing shell statusrmation and arguments
 * @arg: Full command
 * @argv:Array of individual elements from arg
 * @argc: Number of arguments in arg
 * @path: Location of executable for current command
 * @line_count: Number of lines during execution
 * @error_number: Error code for the exit function
 * @line_count_flag: line_count selector
 * @file_name: Executable's filename
 * @env: Local copy of environment variable as Linked list
 * @custom_env: custom modified copy of environ of env
 * @env_changed: Boolean Flag to check if env variable was changed
 * @status: Return value of executed command
 * @history: History of commands
 * @history_count: Number of commands in history
 * @alias: Command aliases saved as linked list
 * @cmd_buffer: address of pointer to cmd_buffer
 * @cmd_buffer_type: Type of command chaining, can be ||, &&,or ;
 * @read_file_descriptor: file descriptor to read
 *
*/
typedef struct status
{
    char *arg;
    char **argv;
    char *path;
    int argc;
    unsigned int line_count;
    int error_number;
    int line_count_flag;
    char *file_name;
    llist_t *env;
    char **environ;
    int env_changed;
    int status;
    llist_t *history;
    int history_count;
    llist_t *alias;
    char **cmd_buffer;
    int cmd_buffer_type;
    int read_file_descriptor;
} status_t;

#define STATUS_INIT {NULL, NULL, NULL, 0, 0, 0, 0, NULL, NULL, NULL, 0, 0, NULL, 0, NULL, Null, 0, 0}

int our_atoi(char *s);
int is_delimiter(char s, char *delimiters);
int our_shell_status(status_t *status);
int our_isalpha(int s);
int our_strtol(char *s);
int our_error_atoi(char *);
void our_error_print(status_t *, char *);
//int our_print_d(int, int);
void our_put(char *s);
void our_error_put(char *);
int our_putchar(char c);
int our_error_putchar(char);
int our_putchar_fd(char , int);
int our_put_fd(char *, int);
int our_strlen(const char *);
int our_strcmp(char *, char *);
char *our_is_substring(const char *, const char *);
char *our_strcat(char *, char *);
char *our_strcpy(char *, const char *);
char *our_strdup(const char *);
char *our_strncpy(char *, const char *, int);
char *our_strncat(char *, char *, int);
char *our_strchr(char *, char);
char **our_strtok(const char *, char *); /*== previously strtow */
char **our_strtow(const char *, char); /* == previously 2 */
int our_unset_alias(status_t *, char *);
int our_set_alias(status_t *, char *s);
int our_print_alias(llist_t *);
/* to be added to memory functions */
char *our_memset(char *, char, unsigned int);
void our_ffree(char **);
void *our_realloc(void *, unsigned int, unsigned int);
int free_buffer(void **);
/*--------*/
/* to be added to shell built-in functions */
int our_exit(status_t *);
int our_cd(status_t *);
int our_help(status_t *);
int our_history(status_t *);
int our_alias(status_t *);
int our_env(status_t *);
void our_clear_status(status_t *);
void our_set_status(status_t *, char **);
void our_free_status(status_t *, int);
char *our_get_env(status_t *, const char *);
int set_env(status_t *);
int unset_env(status_t *);
int add_to_env(status_t *);
int our_environ(status_t *);
int our_set_environ(status_t *);
int our_unset_environ(status_t *);
int our_populate_environ(status_t *);
char **our_get_environ(status_t *);
int our_unset_env(status_t *, char *);
int our_set_env(status_t *, char *, char *);
char *our_history_file(status_t *status);
int our_write_history(status_t *status);
int our_read_history(status_t *status);
int our_build_history(status_t *status, char *buf, int line_count);
int our_number_history(status_t *status);
/*--------*/
/* to be added to linked list functions */
llist_t *add_node(llist_t **, const char *, int);
llist_t *add_node_end(llist_t **, const char *, int);
size_t print_values(const llist_t *);
int delete_node_at_index(llist_t **, unsigned int);
void free_list(llist_t **);
size_t list_size(const llist_t *);
char **list_to_str(llist_t *);
size_t print_index(const llist_t *);
llist_t *node_starts_with(llist_t *, char *, char);
ssize_t get_node_index(llist_t *, llist_t *);
/*--------*/
/* to be added to shell command functions */
int our_is_chain(status_t *, char *, const size_t *);
void our_check_chain(status_t *, char *, size_t *, size_t, size_t);
int our_replace_alias(status_t *);
int our_replace_vars(status_t *);
int our_replace_string(char **, char *);
char *our_convert_number(long int, int, int);

#endif /* OUR_SHELL_H */
