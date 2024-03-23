/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lps <lps@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:51:03 by esimpson          #+#    #+#             */
/*   Updated: 2024/03/23 15:59:42 by lps              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENV_H
# define ENV_H

typedef struct s_env
{
	char			*key;
	char			*value;
	struct s_env	*next;
}					t_env;

t_env				*new_env_node(char *key, char *value);
int					env_update_value(t_env *env_list, t_env *new_node);
void				env_list_sort(t_env **env_list, t_env *new_node);
void				init_env_list(char **envp, t_env **env_list);
void				free_env_node(t_env *node);
void				free_env_list(t_env *env_list);
char				*get_env_value(t_env *env_list, char *key);

#endif
