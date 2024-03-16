/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_shell.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lps <lps@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:51:10 by esimpson          #+#    #+#             */
/*   Updated: 2024/03/16 13:24:35 by lps              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"
#include "../libft/libft.h"

int	init_shell(char **envp, t_shell *myshell)
{
	int		i;
	char	*path;

	if (envp)
		g_exit_code = 0;
	path = NULL;
	i = 0;
	while (envp[i])
	{
		if (ft_strncmp(envp[i], "PWD", 3) == 0)
			path = &envp[i][4];
		i++;
	}
	myshell->path = path;
	myshell->curr_dir = path;
	return (0);
}
