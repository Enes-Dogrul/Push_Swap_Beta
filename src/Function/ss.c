/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogrul <edogrul@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 21:49:26 by edogrul           #+#    #+#             */
/*   Updated: 2022/12/15 21:49:49 by edogrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../library/push_swap.h"

void	ss_sa(t_stack *stack)
{
	stack->temp1 = stack->stack_a[0];
	stack->stack_a[0] = stack->stack_a[1];
	stack->stack_a[1] = stack->temp1;
}

void	ss_sb(t_stack *stack)
{
	stack->temp1 = stack->stack_b[0];
	stack->stack_b[0] = stack->stack_b[1];
	stack->stack_b[1] = stack->temp1;
}

void	ss(t_stack *stack)
{
	ss_sa(stack);
	ss_sb(stack);
	stack->hamlesayisi += 1;
	printf("ss\n");
}
