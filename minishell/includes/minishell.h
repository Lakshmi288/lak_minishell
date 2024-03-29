/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lps <lps@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 13:47:32 by esimpson          #+#    #+#             */
/*   Updated: 2024/03/23 16:09:45 by lps              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include <dirent.h>
# include <fcntl.h>
# include <signal.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/wait.h>
# include <unistd.h>

/* Readline library headers */
# include <readline/history.h>
# include <readline/readline.h>

/* Libraries from includes folder */
# include "../includes/env.h"

typedef struct s_shell
{
	char	*buff;
	char	**env;
	t_env	*env_list;
	//t_list				**var;
	// t_cmd				*cmds;
}			t_shell;


/* --- free.c --- */
void		free_ptr(void *ptr);
void free_exit(t_shell *myshell, int *exit_status);
#define PROMPT_MSG "\033[1;36mminishell\033[34m$ \033[0m"

/***sample test function will be changed ***/
void		test_cmd(t_shell *myshell, int *exit_status);
#endif