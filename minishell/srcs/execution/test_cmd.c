/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_cmd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lps <lps@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 14:12:33 by esimpson          #+#    #+#             */
/*   Updated: 2024/03/23 16:05:46 by lps              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/builtins.h"
#include "../../libft/libft.h"

void	test_cmd(t_shell *myshell, int *exit_status)
{
	char	**result;
	char	*dest;

	dest = NULL;
	if (ft_strcmpi(myshell->buff, "pwd") == 0)
		pwd(exit_status);
	else if (ft_strcmpi(myshell->buff, "env") == 0)
		env(myshell);
	else if (ft_strcmpi(myshell->buff, "exit") == 0)
		exit_cmd(myshell, exit_status);
	else
	{
		result = ft_split(myshell->buff, ' ');
		if (ft_strcmpi(result[0], "echo") == 0)
			echo(result);
	}
}
