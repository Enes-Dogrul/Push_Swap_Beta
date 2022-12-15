/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   long_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogrul <edogrul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 21:50:33 by edogrul           #+#    #+#             */
/*   Updated: 2022/12/15 21:51:39 by edogrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../library/push_swap.h"

void	sort_argv_100_long(t_stack *stack)
{
	int	*temp_stack;
	int	keynbr;
	int	artis;
	int	x;

	x = 0;
	temp_stack = malloc(sizeof(int) * stack->stack_a_size);
	stack_copy(stack, temp_stack);
	selectionSort(temp_stack, stack->stack_a_size);
	keynbr = stack->stack_a_size / 11;
	artis = keynbr;
	while (x < 10)
	{
		middle_sort_1(stack, temp_stack, keynbr);
		keynbr += artis;
		x++;
	}
	while (stack->stack_a_size)
	{
		first_lower(stack);
		pb(stack);
	}
	while (stack->stack_b_size)
	{
		first_biggest(stack);
		pa(stack);
	}
}
