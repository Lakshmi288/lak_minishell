/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lps <lps@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 15:33:24 by esimpson          #+#    #+#             */
/*   Updated: 2024/03/16 13:23:52 by lps              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"
#include "../libft/libft.h"

int	main(int argc, char **argv, char **envp)
{
	char	*buff;
	char	**env_dup;
	t_shell	*myshell;

	(void)argc;
	(void)argv;
	env_dup = arr_2d_dup(envp);
	if (env_dup == NULL)
		return (1);
	myshell = malloc(sizeof(t_shell));
	init_shell(&env_dup[0], myshell);
	//	return (2);
	while (1)
	{
		buff = readline(PROMPT_MSG);
		if (!buff)
			ft_putstr_fd("exit\n", STDOUT_FILENO);
		else if (ft_strncmp(buff, "pwd", 3) == 0)
			pwd(myshell);
	}
	// rl_clear_history();
	return (g_exit_code);
}
