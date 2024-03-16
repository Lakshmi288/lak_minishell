/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lps <lps@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 13:47:32 by esimpson          #+#    #+#             */
/*   Updated: 2024/03/15 16:45:58 by lps              ###   ########.fr       */
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

# define SUCCESS 0
# define ERROR -1
/* Readline library headers*/
# include <readline/history.h>
# include <readline/readline.h>

typedef struct s_shell
{
	int		exit_status;
	char	*curr_dir;
	char	*path;
	char	**env;
	//t_list				**var;
	// t_cmd				*cmds;
}			t_shell;

int			g_exit_code;
char		**arr_2d_dup(char **arr);
int			init_shell(char **envp, t_shell *myshell);
int			pwd(t_shell *shell);

# define PROMPT_MSG "\033[1;36mminishell\033[34m$ \033[0m"
#endif