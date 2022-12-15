/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogrul <edogrul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 21:49:57 by edogrul           #+#    #+#             */
/*   Updated: 2022/12/15 21:50:21 by edogrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../library/push_swap.h"

void	sa(t_stack *stack)
{
	stack->temp1 = stack->stack_a[0];
	stack->stack_a[0] = stack->stack_a[1];
	stack->stack_a[1] = stack->temp1;
	stack->hamlesayisi += 1;
	printf("sa\n");
}

void	sb(t_stack *stack)
{
	stack->temp1 = stack->stack_b[0];
	stack->stack_b[0] = stack->stack_b[1];
	stack->stack_b[1] = stack->temp1;
	stack->hamlesayisi += 1;
	printf("sb\n");
}
