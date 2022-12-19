/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogrul <edogrul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 21:18:29 by edogrul           #+#    #+#             */
/*   Updated: 2022/12/18 23:23:31 by edogrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../library/push_swap.h"

void	struct_split(char **av, t_stack *stack)
{
	char	**tmp;
	int		x;

	x = 0;
	tmp = ft_split(av[1], ' ');
	if (check_argv(tmp, 0, 0) == 0)
		exit(1);
	else
		x = check_argv(tmp, 0, 0);
	create_stack(stack, x);
	x = 0;
	while (x < stack->stack_a_size)
	{
		stack->stack_a[x] = atoi(tmp[x]);
		x++;
	}
	free(tmp);
}

void	struct_argv(int ac, char **av, t_stack *stack)
{
	int	x;

	create_stack(stack, ac - 1);
	x = 0;
	while (x < ac - 1)
	{
		stack->stack_a[x] = atoi(av[x + 1]);
		x++;
	}
}

int	check_argv(char **tmp, int x, int y)
{
	while (tmp[y])
	{
		x = 0;
		while (tmp[y][x])
		{
			if (!((tmp[y][x] <= '9' && tmp[y][x] >= '0')
				|| tmp[y][x] == 32 || tmp[y][x] == '-'))
				return (0);
			x++;
		}
		y++;
	}
	return (y);
}
