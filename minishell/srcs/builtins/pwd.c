/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lps <lps@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 16:07:17 by lps               #+#    #+#             */
/*   Updated: 2024/03/16 13:24:17 by lps              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

int	pwd(t_shell *shell)
{
    printf("%s\n", shell->curr_dir);
    return (SUCCESS);
}

// #include <stdio.h>

// int main() {

//     t_shell my_shell;

//     my_shell.curr_dir = "/Users/lps/Desktop/minishell/srcs/builtins";

//     pwd(&my_shell);

//     return (0);
// }
