/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_cmd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lps <lps@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 14:12:33 by esimpson          #+#    #+#             */
/*   Updated: 2024/03/21 16:35:44 by lps              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"
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
	else if (ft_strcmp( myshell->buff, "echo"))
	{
		result = ft_split(myshell->buff, ' ');
		free(dest);
		echo(result);
	}
}
