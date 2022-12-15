/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogrul <edogrul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 21:42:35 by edogrul           #+#    #+#             */
/*   Updated: 2022/12/15 21:44:00 by edogrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../library/push_swap.h"

void	rra(t_stack *stack)
{
	int	x;

	stack->temp = malloc(sizeof(int) * (stack->stack_a_size));
	x = 0;
	while (x < stack->stack_a_size)
	{
		stack->temp[x] = stack->stack_a[x];
		x++;
	}
	stack->temp1 = stack->stack_a[stack->stack_a_size - 1];
	x = 0;
	while (x < stack->stack_a_size - 1)
	{
		stack->stack_a[x + 1]= stack->temp[x];
		x++;
	}
	stack->stack_a[0] = stack->temp1;
	free(stack->temp);
	stack->hamlesayisi += 1;
	printf("rra\n");
}

void	rrb(t_stack *stack)
{
	int	x;

	stack->temp = malloc(sizeof(int) * (stack->stack_b_size));
	x = 0;
	while (x < stack->stack_b_size)
	{
		stack->temp[x] = stack->stack_b[x];
		x++;
	}
	stack->temp1 = stack->stack_b[stack->stack_b_size - 1];
	x = 0;
	while (x<stack->stack_b_size - 1)
	{
		stack->stack_b[x + 1] = stack->temp[x];
		x++;
	}
	stack->stack_b[0]=stack->temp1;
	free(stack->temp);
	stack->hamlesayisi += 1;
	printf("rrb\n");
}
