/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 10:44:53 by esimpson          #+#    #+#             */
/*   Updated: 2023/07/21 16:31:54 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char const	*ptr;

	ptr = NULL;
	while (*s)
	{
		if (*s == (char)c)
			ptr = s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	else
		return ((char *)ptr);
}

// int	main(void)
// {
// 	int		c;
// 	char	*str;
// 	char	*locate;

// 	str = "bonjour";
// 	c = 's';
// 	if (ft_strrchr(str, 's') == NULL)
// 		printf("NULL");
// 	else
// 		printf("%s", str);
// 	return (0);
// }
