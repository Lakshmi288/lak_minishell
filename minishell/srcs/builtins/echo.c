
#include "../../includes/minishell.h"
#include "../../libft/libft.h"


int	flag_nl(char *flag)
{
	int	i;

	i = 0;
	if (ft_strlen(flag) <= 1)
		return (0);
	if (flag[0] != '-')
		return (0);
	while (flag[++i])
		if (flag[i] != 'n')
			return (0);
	return (1);
}

void	echo(char **av)
{
	int	flag;

	flag = flag_nl(av[1]);
	while (av[++flag])
	{
		printf("%s", av[flag]);
		if (av[flag + 1])
			printf(" ");
	}
	if (!flag_nl(av[1]))
		printf("\n");
}
