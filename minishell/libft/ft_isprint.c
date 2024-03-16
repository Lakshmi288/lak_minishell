/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:33:30 by esimpson          #+#    #+#             */
/*   Updated: 2023/07/21 16:28:40 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
// #include <stdio.h>
// #include <stdlib.h>

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	int	i;

// 	i = -1;
// 	printf("...%d", ft_isprint(288));
// 	while (i < 530)
// 	{
// 		if (!!ft_isprint(i) != !!isprint(i))
// 		{
// 			printf("\n ft_isprint(%d)=%d  isprint(%d)=%d", i, ft_isprint(i), i,
// 					isprint(i));
// 			exit(0);
// 		}
// 		i++;
// 	}
// 	printf("Success");
// 	return (0);
// }
