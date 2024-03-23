#ifndef BUILTINS_H
# define BUILTINS_H

#include "../includes/minishell.h"

void	pwd(int *exit_status);
void	env(t_shell *myshell);
void	echo(char **av);
void	exit_cmd(t_shell *myshell, int *exit_status);

#endif
