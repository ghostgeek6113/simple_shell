cmake_minimum_required(VERSION 3.25)
project(simple_shell C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(simple_shell
        string_functions/is_delimiter.c
        string_functions/our_atoi.c
        shell_commands/our_exit.c
        string_functions/our_isalpha.c
        string_functions/our_putchar.c
        string_functions/our_puts.c
        our_shell.h
        our_strtol.c
        our_shell_status.c
        string_functions/our_strlen.c
        string_functions/our_strcmp.c
        string_functions/our_is_substring.c
        string_functions/our_strcat.c
        string_functions/our_strcpy.c
        string_functions/our_strdup.c
        string_functions/our_strncpy.c
        string_functions/our_strncat.c
        string_functions/our_strchr.c
        string_functions/our_strtok.c
        string_functions/our_strtow.c
        shell_commands/our_cd.c
        shell_commands/our_help.c
        shell_commands/our_history.c
        shell_commands/our_alias.c
        shell_commands/our_clear_status.cpp
        shell_commands/our_set_status.c
        shell_commands/our_free_status.c
        shell_commands/our_get_env.c
        shell_commands/our_environ.c
        shell_commands/our_set_environ.c
        shell_commands/our_unset_environ.c
        shell_commands/our_populate_environ.c
        shell_commands/our_get_environ.c
        shell_commands/our_set_env.c
        shell_commands/our_unset_env.cpp
        shell_commands/our_history_file.c
        shell_commands/our_read_history.c
        shell_commands/our_write_history.c
        shell_commands/our_build_history.cpp
        shell_commands/our_number_history.c
        shell_built_in_functions/our_is_chain.c
        shell_built_in_functions/our_check_chain.c
        shell_built_in_functions/our_replace_alias.c
        shell_built_in_functions/our_replace_vars.c
        shell_built_in_functions/our_replace_strings.c
        linked_list_functions/add_node.c
        linked_list_functions/add_node_end.c
        linked_list_functions/print_values.c
        linked_list_functions/list_to_str.c
        linked_list_functions/delete_node_at_index.c
        linked_list_functions/free_list.c
        linked_list_functions/list_size.c
        linked_list_functions/print_index.c
        linked_list_functions/node_starts_with.c
        linked_list_functions/get_node_index.c
        errors_handling_functions/our_atoi_error.c
        errors_handling_functions/our_error_print.c
        errors_handling_functions/our_error_put.c
        errors_handling_functions/our_error_putchar.c
        alias_functions/our_set_alias.c
        alias_functions/our_print_alias.c
        alias_functions/our_unset_alias.c
        shell_commands/our_env.c
        environment_functions/set_env.c
        environment_functions/unset_env.c
        environment_functions/set_environ.c
        environment_functions/unset_environ.c
        environment_functions/add_to_env.c
        string_functions/our_putchar_fd.c
        string_functions/our_put_fd.c
        errors_handling_functions/our_error_atoi.c
        errors_handling_functions/our_error_atoi.c
        )
